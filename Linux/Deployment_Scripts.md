To create a `systemd` script for running an Express.js backend application using PM2 with 4 instances, you'll need to define a `systemd` service file that ensures PM2 starts and maintains your application across reboots. This file will specify the user running the service, the command to launch PM2, and the desired behavior upon service start, stop, or reboot.

Here is the `systemd` script you can use:

### Creating the Systemd Service File
1. **Create the Service File**  
   Open a terminal and create a new systemd service file:
   ```bash
   sudo nano /etc/systemd/system/express-backend.service
   ```

2. **Edit the Service File**  
   Add the following content to define your `systemd` service. Replace `/home/azureuser/backend/galvaai/backend/` with the appropriate directory path where your backend code resides.

   ```ini
   [Unit]
   Description=Express.js Backend Service
   After=network.target

   [Service]
   Type=forking
   ExecStart=/home/azureuser/.nvm/versions/node/$(nvm current)/bin/pm2 start /home/azureuser/backend/galvaai/backend/index.js -i 4 --name "express-backend"
   ExecStop=/home/azureuser/.nvm/versions/node/$(nvm current)/bin/pm2 stop express-backend
   ExecReload=/home/azureuser/.nvm/versions/node/$(nvm current)/bin/pm2 reload express-backend
   User=azureuser
   WorkingDirectory=/home/azureuser/backend/galvaai/backend/
   Restart=always
   RestartSec=10
   Environment="PATH=/usr/bin:/bin:/usr/local/sbin:/usr/sbin:/sbin:/usr/local/bin:/usr/bin:/home/azureuser/.nvm/versions/node/$(nvm current)/bin"
   Environment="PM2_HOME=/home/azureuser/.pm2"

   [Install]
   WantedBy=multi-user.target
   ```

### Explanation of the Service File
- **Type**: `forking` indicates that PM2 forks to the background.
- **ExecStart**: This is the command to start PM2 with 4 instances of your Express.js application.
- **ExecStop**: Stops the PM2 service with the specified name.
- **ExecReload**: Reloads the PM2 service.
- **WorkingDirectory**: The directory where your backend code resides.
- **Restart**: The service should restart automatically if it fails.
- **Environment**: Defines environment variables, including the PM2 home directory.

### Enable and Start the Service
Once the service file is created, enable it to start on boot and then start the service:

```bash
sudo systemctl daemon-reload  # Reload systemd to recognize new service
sudo systemctl enable express-backend.service  # Enable the service to start on boot
sudo systemctl start express-backend.service  # Start the service
```

### Verify the Service
After starting the service, check its status to ensure it's running correctly:

```bash
sudo systemctl status express-backend.service
```

If you encounter any errors, examine the logs for troubleshooting:

```bash
journalctl -u express-backend.service -b
```

### Notes
- This script assumes you're using `nvm` to manage Node.js versions. Adjust the `ExecStart` and `Environment` paths according to your Node.js installation.
- Ensure that PM2 is installed and accessible in your environment. If not, you may need to adjust the `PATH` in the `Environment` variable.
- If you're running the service on a production system, consider security implications, user permissions, and resource constraints.

This script should help you set up your Express.js backend to run in PM2 with 4 instances and ensure it's automatically started and maintained after reboots.



Deploying applications with a focus on resilience, scalability, and reproducibility involves several methodologies and best practices. The goal is to ensure that even if a VM is deleted, you can quickly rebuild the application and maintain a consistent deployment process. Here's the proper way to achieve this:

### 1. Version Control
Keep your code in a version control system like Git. This practice allows you to track changes, collaborate with others, and easily rebuild your application.

- **GitHub/GitLab/Bitbucket**: Choose a platform to host your repository.
- **Branching and Tagging**: Use branches for feature development and tagging for releases.
- **Automated Backups**: Ensure the repository is backed up and has redundancy.

### 2. Infrastructure as Code (IaC)
Define your infrastructure using code, allowing you to rebuild environments quickly.

- **Tools**: Use Terraform, AWS CloudFormation, or Azure Resource Manager to define your VM setup, network, storage, and other resources.
- **Repository**: Store your IaC scripts in the same or a separate repository for infrastructure.

### 3. Configuration Management
Ensure consistent configuration across environments.

- **Tools**: Use Ansible, Puppet, or Chef to define the software installation and configuration for your VMs.
- **Scripts**: Define tasks such as installing dependencies, setting environment variables, and configuring systemd services.

### 4. Containerization
Encapsulate your application in a container for portability and consistency.

- **Docker**: Define Dockerfiles for your frontend and backend applications, specifying all dependencies and build steps.
- **Docker Compose**: If your application consists of multiple containers, use Docker Compose to define their interaction.
- **Registry**: Push your Docker images to a registry like Docker Hub or AWS ECR to easily retrieve them.

### 5. CI/CD
Implement Continuous Integration and Continuous Deployment to automate build, test, and deployment processes.

- **CI Tools**: Use GitHub Actions, GitLab CI, or Jenkins to automate builds and tests when code is pushed to the repository.
- **CD Tools**: Use these same tools to automatically deploy to a VM or container orchestrator.
- **Testing**: Include unit tests, integration tests, and end-to-end tests in your pipeline to ensure code quality.

### 6. Automated Deployment
Automate the deployment process to ensure consistency.

- **Scripts/Playbooks**: Define scripts to deploy the application, set up infrastructure, and configure services.
- **Idempotency**: Ensure scripts are idempotent, meaning they can be run multiple times without causing errors or inconsistency.
- **Environment Variables**: Use environment variables for sensitive information like API keys and database credentials.

### 7. Monitoring and Logging
Set up monitoring and logging to track application health and troubleshoot issues.

- **Logging Tools**: Use tools like ELK Stack (Elasticsearch, Logstash, Kibana), Graylog, or Fluentd to collect and analyze logs.
- **Monitoring Tools**: Tools like Prometheus, Grafana, or Datadog can monitor system health, performance, and application metrics.

### 8. Backup and Recovery
Implement backup strategies to ensure data and infrastructure can be restored.

- **Data Backup**: Regularly back up databases and other critical data.
- **Infrastructure Backup**: Backup IaC scripts and other essential deployment files.
- **Disaster Recovery**: Define disaster recovery plans to quickly rebuild the application in case of failure or loss of VM.

### Summary
Following these methodologies and best practices ensures that you can reliably deploy your application and recover from failures or data loss. By using IaC, containerization, CI/CD, and proper monitoring, you create a robust deployment process that is resilient to VM loss and allows for rapid recovery and redeployment.

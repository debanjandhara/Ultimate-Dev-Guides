Add dpkg, zip unzip by .deb, tar..... driver installations, setup like google debian image script, mount a disk to cloud, screen


Certainly, I can provide you with a full guide on using the `screen` command in Ubuntu. The `screen` command is a powerful terminal multiplexer that allows you to run multiple terminal sessions within a single terminal window. It's particularly useful for tasks that need to persist even after you disconnect from your server or for managing multiple tasks simultaneously.

Here's a comprehensive guide on how to use the `screen` command in Ubuntu:

**1. Installation:**
   If you don't have `screen` installed, you can install it using the following command:

   ```bash
   sudo apt-get install screen
   ```

**2. Basic Usage:**
   - To start a new screen session, simply type `screen` in your terminal.
   - To detach from the current screen session (leave it running in the background), press `Ctrl` + `a`, and then `d`.
   - To reattach to a running screen session, use the command:

     ```bash
     screen -r
     ```

**3. Managing Screen Sessions:**
   - List all active screen sessions:

     ```bash
     screen -ls
     ```

   - To reattach to a specific session, provide its name or process ID:

     ```bash
     screen -r session_name
     ```

**3.1 Detaching from a screen:**
   - To detach a screen, press `Ctrl` + `a`, and then `d`.

**4. Creating and Navigating Windows:**
   - Inside a screen session, you can create multiple windows. To create a new window, press `Ctrl` + `a`, and then `c`.
   - To switch between windows, press `Ctrl` + `a`, and then `n` for the next window, or `Ctrl` + `a`, and then `p` for the previous window.
   - To close a window, press `Ctrl` + `a`, and then `k`.

**5. Splitting the Terminal:**
   - You can split the terminal horizontally by pressing `Ctrl` + `a`, and then `%`.
   - To split it vertically, press `Ctrl` + `a`, and then `S`.

**6. Scrollback and Copy-Paste:**
   - To enter scrollback mode and navigate through the terminal output, press `Ctrl` + `a`, and then `[`.
   - To copy text in scrollback mode, use `Space` to start selecting, and `Enter` to copy. You can paste the copied text with `Ctrl` + `a`, and then `]`.

**7. Session Management:**
   - To close a screen session, exit all windows, and type:

     ```bash
     exit
     ```

   - To close a specific session, use:

     ```bash
     screen -X -S session_name quit
     ```

**8. Customizing `screen`:**
   - You can customize `screen` by creating a `.screenrc` file in your home directory. This file can contain various settings and key bindings.

This guide should help you get started with the `screen` command in Ubuntu. It's a versatile tool that can greatly enhance your productivity in a terminal environment.


Yes, you can give custom names to your `screen` sessions. This makes it easier to identify and manage your sessions. Here's how you can do it:

1. **Start a New Named Session:**
   Instead of simply running `screen`, you can provide a custom name for your session using the `-S` option. For example:

   ```bash
   screen -S mysessionname
   ```

   This will start a new `screen` session with the name "mysessionname."

2. **List and Reattach Named Sessions:**
   To list all active screen sessions along with their names, you can use the `-list` option:

   ```bash
   screen -ls
   ```

   It will display a list of sessions with their names, process IDs, and other details.

3. **Reattach to a Named Session:**
   To reattach to a specific named session, use the `-r` option followed by the session name:

   ```bash
   screen -r mysessionname
   ```

   This will reattach you to the "mysessionname" session.

4. **Detach from a Named Session:**
   To detach from a named session, use the `Ctrl` + `a`, and then `d` key combination as you would with any other `screen` session.

By giving custom names to your `screen` sessions, you can easily manage and switch between them. It's particularly useful when you have multiple sessions running simultaneously.

---------------------------------------------------------------------------

Certainly! Below is a simple shell script that you can use to install the mentioned tools and perform an update and upgrade on an Ubuntu system. Please note that this script assumes a Debian-based system, such as Ubuntu, and it might require sudo privileges.

```bash
#!/bin/bash

# Update and upgrade the system
sudo apt update
sudo apt upgrade -y

# Install necessary tools and applications
sudo apt install -y \
    ubuntu-drivers-common \
    docker.io \
    git \
    python3 \
    python3-pip \
    default-jdk \
    nodejs \
    npm

# Install additional libraries and drivers
sudo apt install -y \
    build-essential \
    dkms \
    linux-headers-$(uname -r)

# Install drivers using ubuntu-drivers
sudo ubuntu-drivers install

sudo snap install docker
sudo usermod -aG docker $USER

# Additional configuration or steps for Docker (if needed)
# For example, adding the user to the docker group
# sudo usermod -aG docker $USER

echo "Installation complete!"
```

Save this script to a file, for example, `install_tools.sh`. Make it executable by running:

```bash
chmod +x install_tools.sh
```

Then, execute the script with:

```bash
./install_tools.sh
```

Please be cautious when running scripts from the internet, and review the script to ensure it meets your requirements. Additionally, consider following best practices for security, such as regularly updating packages and avoiding unnecessary installations.

---------------------------------------------------------------------------------

To serve your Node.js app on port 80 and 443 on a Linux server, you can use a reverse proxy like Nginx. Here's a step-by-step guide:

1. **Install Nginx:**
   ```bash
   sudo apt update
   sudo apt install nginx
   ```

2. **Stop your Node.js app if it's running:**
   ```bash
   pm2 stop your_app_name  # or use your preferred process manager
   ```

3. **Configure Nginx:**
   - Create a new configuration file for your app. For example, create a file named `your_app` in the `/etc/nginx/sites-available/` directory.
     ```bash
     sudo nano /etc/nginx/sites-available/your_app
     ```

   - Add the following configuration, replacing placeholders with your actual values:
     ```nginx
     server {
         listen 80;
         server_name your_domain_or_ip;

         location / {
             return 301 https://$host$request_uri;
         }
      }

     server {
         listen 80;
         server_name your_domain_or_ip;

         location / {
             proxy_pass http://127.0.0.1:your_node_app_port;
             proxy_http_version 1.1;
             proxy_set_header Upgrade $http_upgrade;
             proxy_set_header Connection 'upgrade';
             proxy_set_header Host $host;
             proxy_cache_bypass $http_upgrade;
         }
     }

     server {
         listen 443 ssl;
         server_name your_domain_or_ip;

         ssl_certificate /path/to/your/ssl_certificate.crt;
         ssl_certificate_key /path/to/your/ssl_certificate_key.key;

         location / {
             proxy_pass http://127.0.0.1:your_node_app_port;
             proxy_http_version 1.1;
             proxy_set_header Upgrade $http_upgrade;
             proxy_set_header Connection 'upgrade';
             proxy_set_header Host $host;
             proxy_cache_bypass $http_upgrade;
         }
     }
     ```
     Save the file and exit.

4. **Create a symbolic link to enable the site:**
   ```bash
   sudo ln -s /etc/nginx/sites-available/your_app /etc/nginx/sites-enabled
   ```

5. **Test Nginx configuration:**
   ```bash
   sudo nginx -t
   ```

6. **Restart Nginx:**
   ```bash
   sudo service nginx restart
   ```

Now, your Node.js app should be accessible on both `http://your_domain_or_ip` and `https://your_domain_or_ip`. Make sure to replace placeholders like `your_domain_or_ip` and `your_node_app_port` with your actual values.

Note: If you want to use SSL (HTTPS), you need to have an SSL certificate. Replace `/path/to/your/ssl_certificate.crt` and `/path/to/your/ssl_certificate_key.key` with the actual paths to your SSL certificate and private key files. If you don't have an SSL certificate, you can obtain one from a certificate authority or use a free service like Let's Encrypt.

Certainly! To install Nginx on a Debian-based Linux distribution (such as Ubuntu), you can use the following commands:

```bash
sudo apt update
sudo apt install nginx
```

This will update your package list and install Nginx on your system. After the installation is complete, you can start, stop, and restart Nginx using the following commands:

- To start Nginx:
  ```bash
  sudo service nginx start
  ```

- To stop Nginx:
  ```bash
  sudo service nginx stop
  ```

- To restart Nginx after making configuration changes:
  ```bash
  sudo service nginx restart
  ```

Nginx should now be installed on your system, and you can proceed with the configuration steps mentioned in the previous response to set up your Node.js app to be served on port 80 and 443.


In the `server_name` directive, you should provide the domain name or IP address that you want to associate with your Node.js app. If you have a domain name, you would replace `your_domain_or_ip` with that domain. For example:

```nginx
server_name example.com;
```

If you are using an IP address, replace `your_domain_or_ip` with the actual IP address:

```nginx
server_name 192.168.1.2;
```

Choose the appropriate option based on whether you have a domain or if you're using an IP address to access your server.

This is to 1) http --> https and 2) ip --> domain name redirection
```nginx
server {
    listen 80;
    listen [::]:80;
    server_name pineai.co 89.117.77.63;
    return 301 https://pineai.co$request_uri;
 }
```



--------------------------------------------------
Write here how to do rate limiting and gunicorn and gevent in flask
how to deploy node with pm2
how to deploy react using serve -->

npm install -g serve
npm run build --> fine buld directory (here:dist)
serve -s dist

--------------------------------------------------

```nginx
server {
    listen 80;
    listen [::]:80;
    server_name pineai.co 89.117.77.63;
    return 301 https://pineai.co$request_uri;
 }

server {
    listen 80;
    server_name pineai.co 89.117.77.63;

    location /api/admin/ {
        proxy_pass http://127.0.0.1:8001;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }

    location / {
        proxy_pass http://127.0.0.1:3000;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }

    location /api/ {
    	proxy_pass http://127.0.0.1:8001;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }

    location /return-text/ {
    	proxy_pass http://127.0.0.1:8002;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
        proxy_buffering off;
    }
}

server {
    listen 443 ssl;
    server_name pineai.co 89.117.77.63;

    # Provider - Certbot

    ssl_certificate /etc/letsencrypt/live/pineai.co/fullchain.pem;
    ssl_certificate_key /etc/letsencrypt/live/pineai.co/privkey.pem;
    include /etc/letsencrypt/options-ssl-nginx.conf;
    ssl_dhparam /etc/letsencrypt/ssl-dhparams.pem;

    # ___________________

    location / {
        proxy_pass http://127.0.0.1:3000;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }

    location /api/ {
    	proxy_pass http://127.0.0.1:8001;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }

    location /return-text/ {
        proxy_pass http://127.0.0.1:8002;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
        proxy_buffering off;
    }
}

```

https://www.nginx.com/blog/using-free-ssltls-certificates-from-lets-encrypt-with-nginx/

```bash
# first install GIT CLI, not from snap:
sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-key 23F3D4EA75716059
sudo apt-add-repository https://cli.github.com/packages
sudo apt update
sudo apt install gh

# Create your token here:  created at https://github.com/settings/tokens
# Note: check most boxes that require Read, or you will have to do it again later.
# write it to file  ~/mytoken.txt

# now you can configure store where gh will keep credentials:
git config --global credential.helper 'store --file ~/.git-credentials'
/usr/bin/gh auth setup_git
cat ~/.gitconfig

# Hopefully, you can login now:
/usr/bin/gh auth login --with-token < ~/mytoken.txt

# now you can do operations that require authentication (careful!), "git" saves to and reads from store:
git push -f https://github.com/.....

# if it asks for password, give them the token:
Username for 'https://github.com': <your GitHub name>
Password for 'https://...@github.com': <token, not password>
```

```bash
gunicorn -w 10 -k gevent -b 0.0.0.0:8080 main:app
```

```bash
sudo snap install certbot --classic
```

```bash
sudo certbot --nginx -d domain.com -d www.domain.com
```

## To git pull at once using <token> key : 
```bash
git pull https://<username_self/other>:<token_key_self/other>@github.com/debanjandhara/the_art_story_chatbot.git
```


### Configure your backend at Niginx, without API Prefix

```nginx
server {
    listen 443 ssl;
    listen [::]:443 ssl;
    server_name www.galva.ai 74.249.28.101;

    ssl_certificate /etc/letsencrypt/live/galva.ai/fullchain.pem;
    ssl_certificate_key /etc/letsencrypt/live/galva.ai/privkey.pem;
    include /etc/letsencrypt/options-ssl-nginx.conf;
    ssl_dhparam /etc/letsencrypt/ssl-dhparams.pem;

    location /api/ {
        proxy_pass http://127.0.0.1:8000;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
        proxy_buffering off;

        # Strip /api from the URI before forwarding it to FastAPI
        rewrite ^/api(/.*)$ $1 break;
    }

}
```

## When you are facing problem to access Swagger UI, without any changes towards dev side : 

```nginx
# Serve www.galva.ai over HTTPS (frontend and backend)
server {
    listen 443 ssl;
    listen [::]:443 ssl;
    server_name www.galva.ai 74.249.28.101;

    ssl_certificate /etc/letsencrypt/live/galva.ai/fullchain.pem;
    ssl_certificate_key /etc/letsencrypt/live/galva.ai/privkey.pem;
    include /etc/letsencrypt/options-ssl-nginx.conf;
    ssl_dhparam /etc/letsencrypt/ssl-dhparams.pem;

    # Frontend
    location / {
        proxy_pass http://172.18.0.3:80;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }

    # Backend API
    location /api/ {
        proxy_pass http://172.18.0.2:8003;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
        proxy_buffering off;

    }

    # Backend - Swagger UI API
    location /docs {
        proxy_pass http://172.18.0.2:8003/docs;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
        proxy_buffering off;

    }

    # Backend - Swagger UI API - Openapi.json - Dependency
    location /openapi.json {
        proxy_pass http://172.18.0.2:8003/openapi.json;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection 'upgrade';
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
        proxy_buffering off;

    }
}

```

The IPs that I have got here, is from the Docker Service

## Host Static Site in Nginx

```nginx
server {
    listen 80;
    server_name your_domain.com;
    root /var/www/html/your_build_directory;
    index index.html;
    location / {
        try_files $uri /index.html;
    }
}
```

Cron Jobs : 

```bash
0 0 */28 * * /home/azureuser/renew_cert.sh >> /home/azureuser/renew_cert.log 2>&1
0 1 * * * /home/azureuser/random_git_update.sh >> /home/azureuser/random_git_update.log 2>&1
```
/home/azureuser/renew_cert.sh : 

```bash
#!/bin/bash

# Stop Nginx
sudo systemctl stop nginx

# Renew certificates
sudo certbot renew

# Start Nginx
sudo systemctl start nginx
```

/home/azureuser/random_git_update.sh : 

```bash
#!/bin/bash

# Function to generate a random number between a range
random_between() {
  shuf -i "$1"-"$2" -n 1
}

# Select a random number of times to run the tasks: 2, 3, 5, or 8
TIMES=$(shuf -e 2 2 2 2 2 3 3 3 3 3 4 5 6 7 8 -n 1)

# Change to the git repository directory
cd /home/azureuser/debanjan || exit

for ((i = 0; i < TIMES; i++)); do
  # Add random information to the sample.txt file
  echo "Random information $(date)" | sudo tee -a sample.txt

  # Stage the changes
  sudo git add .

  # Commit the changes with a random message
  COMMIT_MSG="Random commit message $(date)"
  sudo git commit -m "$COMMIT_MSG"

  # Push the changes to the main branch
  sudo git push origin main
done
```


running cloudrun - gcloud artifacts repositories create frontend-dev \
  --repository-format=docker \
  --location=us-central1 \
  --description="Docker repo for frontend Cloud Run deployment"


az billing account list

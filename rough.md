If you are encountering issues with the current version of Chrome and ChromeDriver and wish to downgrade to a previous version, you can follow these steps:

1. **Uninstall the Current Versions**:
   Before downgrading, it's a good idea to uninstall the current versions of Chrome and ChromeDriver to avoid any conflicts.

   To uninstall Chrome on Ubuntu or a Debian-based system, you can use the following command:

   ```bash
   sudo apt-get remove google-chrome-stable
   ```

   To uninstall ChromeDriver, you can remove the `chromium-chromedriver` package:

   ```bash
   sudo apt-get remove chromium-chromedriver
   ```

2. **Download Previous Versions**:
   To downgrade, you need to download the specific versions you want. You can usually find older versions of Chrome and ChromeDriver on the official websites or on GitHub repositories that host release archives. Be sure to download versions that are known to be compatible with each other.

   For example, you can visit the ChromeDriver download page (https://sites.google.com/chromium.org/driver/) or Chrome release history (https://omahaproxy.appspot.com/). Choose the versions you want to download and ensure they match.

3. **Install Downgraded Versions**:
   Install the downgraded versions of Chrome and ChromeDriver using the package manager (e.g., `apt-get`) or by manually installing them from the downloaded files.

   For example, if you have downloaded the specific Chrome `.deb` package for the older version, you can install it using:

   ```bash
   sudo dpkg -i /path/to/chrome-package.deb
   ```

   Similarly, you can install the downgraded ChromeDriver using:

   ```bash
   sudo dpkg -i /path/to/chromedriver-package.deb
   ```

4. **Pin Packages to Avoid Updates** (Optional):
   To prevent automatic updates of Chrome and ChromeDriver to the latest versions, you can "pin" the packages. This involves creating a configuration file in `/etc/apt/preferences.d/`. For example:

   ```bash
   sudo nano /etc/apt/preferences.d/pin-chrome
   ```

   Add the following lines to the file to pin the version:

   ```bash
   Package: google-chrome-stable
   Pin: version <desired_version>
   Pin-Priority: 1001

   Package: chromium-chromedriver
   Pin: version <desired_version>
   Pin-Priority: 1001
   ```

   Replace `<desired_version>` with the version you want to keep. Setting `Pin-Priority` to `1001` gives priority to the pinned version.

5. **Update Package Cache and Verify**:
   After downgrading, update the package cache and verify that the downgraded versions are installed:

   ```bash
   sudo apt-get update
   dpkg -l | grep google-chrome-stable
   dpkg -l | grep chromium-chromedriver
   ```

Please note that downgrading may have compatibility and security implications, so be sure to choose versions that meet your specific requirements and constraints. Additionally, always keep your software up-to-date to benefit from security updates and improvements whenever possible.

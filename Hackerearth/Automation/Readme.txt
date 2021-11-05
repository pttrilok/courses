This python script is used to automatically add comments on a question on the HackerEarth platform containing youtube links and Github links.

Though we can modify it for only comments or with particular links only. But the above script is meant for a format comment + youtube link + Github link.

We need to provide the following details:-
  i) Username of HackerEarth account in line no. 67.
  ii) Password of the same account in line no. 68.
  iii) List of the link of questions in line no. 69.
  iv) List of corresponding titles in line no. 70.
  v) List of corresponding comments in line no. 71.
  vi) List of corresponding Youtube links in line no. 72.
  vii) List of corresponding Github links in line no. 73.
  viii) Address of the chrome drivers store in your pc in line no. 74.

After providing the above details, you need to run the script, and then comments will be added automatically at an average speed of 6 seconds per comment.

To download the chrome driver visit https://chromedriver.chromium.org/downloads and download the drivers based on your chrome version and pc specification.  

One of the major benefits of using this script is that it handles all corner cases like due to any reason, the script stops in between a comment then when we rerun it, it starts commenting from the same link rather than starting from the first link.
Hence handle the case of multiple comments due to internet failure, system failure, or any other reason.

Caution:-
  Do not edit any file that is created by code on your platform. That was a temporary file and will be deleted automatically when the script ran successfully. Editing that file may raise an unexpected error or cause failure to the script.

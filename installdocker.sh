sudo apt update
sudo apt install -y docker.io
sudo usermod -aG docker $USER  # Даёт права вашему пользователю
newgrp docker                  # Применяем изменения без перезагрузки
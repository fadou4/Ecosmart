# ♻️ EcoSmart – Smart Waste Classification System

EcoSmart is an **AI-powered waste management system** developed as part of my Master’s thesis in Software Engineering at Université Abdelhamid Mehri – Constantine 2.

It combines **Machine Learning, IoT, and Web/Mobile deployment** to create an intelligent recycling solution. The system uses **deep learning models** to classify waste images, while **Arduino-based smart bins** collect real-time data on fill levels and optimize waste collection.

---

## 🎯 Objectives

* Build a reliable model to classify recyclable waste from images
* Compare traditional machine learning (XGBoost) with deep learning (CNN)
* Deploy the model to a **web application** for user testing
* Integrate IoT smart bins with Arduino sensors to monitor bin capacity
* Contribute to eco-friendly solutions using AI and IoT technologies

---

## 📂 Repository Contents

```
EcoSmart/
├── dataset/            # Waste image dataset (train/test/validation)
├── models/             # Saved models (CNN, XGBoost)
├── notebooks/          # Jupyter notebooks for training & evaluation
├── src/                # Python scripts for preprocessing & training
├── results/            # Evaluation results, graphs, confusion matrix
├── arduino/            # Arduino sketches for IoT bin prototype
├── requirements.txt    # Dependencies
├── README.md           # Documentation (this file)
└── thesis/             # Master’s thesis (reference)
```

---

## 🛠 Tech Stack

* **Programming Languages:** Python, C++ (Arduino)
* **ML/DL Frameworks:** TensorFlow / Keras, XGBoost
* **Data Processing:** Pandas, NumPy, OpenCV
* **Visualization:** Matplotlib, Seaborn
* **IoT Hardware:**

  * Arduino Uno
  * Ultrasonic sensor (HC-SR04) for fill-level detection
  * Servo motor for bin lid control
  * ESP8266 module for wireless communication
* **Deployment:** Flask (prototype in [webDeployement repo](https://github.com/fadou4/webDeployement))
* **Environment:** Jupyter Notebook, Google Colab, Arduino IDE

---

## 🔍 Methodology

1. **Data Collection & Cleaning**

   * Waste dataset with 5 categories: Plastic, Paper, Metal, Glass, Organic.

2. **Data Augmentation**

   * Rotation, flipping, scaling, zoom.

3. **Modeling**

   * **CNN (Convolutional Neural Network):** achieved highest performance.
   * **XGBoost:** tested as baseline ML classifier.

4. **IoT Smart Bin (Arduino Prototype)**

   * Ultrasonic sensor measures bin fill level.
   * Servo motor automatically opens/closes bin lid.
   * ESP8266 transmits data to the cloud/web app.
   * Real-time monitoring of bins to optimize waste collection.

5. **Training & Evaluation**

   * CNN model accuracy: **96%**
   * XGBoost model accuracy: ~**85%**
   * Confusion matrix & metrics (Precision, Recall, F1-score) confirm CNN superiority.

---

## 📊 Results

* **CNN Model:** 96% accuracy, robust across all waste categories.
* **XGBoost Model:** ~85% accuracy.
* **IoT Prototype:**

  * Successfully measured bin levels.
  * Real-time alerts when bins are full.
  * Arduino + sensors demonstrated feasibility for smart waste collection.

---

## 🚀 Installation & Usage

### 1. Machine Learning Model

1. Clone the repository:

   ```bash
   git clone https://github.com/fadou4/Ecosmart.git
   cd Ecosmart
   ```

2. Create and activate a virtual environment:

   ```bash
   python -m venv venv
   source venv/bin/activate   # Linux/Mac
   venv\Scripts\activate      # Windows
   ```

3. Install dependencies:

   ```bash
   pip install -r requirements.txt
   ```

4. Train or test model:

   ```bash
   python src/train_cnn.py
   python src/predict.py --image test_image.jpg
   ```

---

### 2. Arduino Smart Bin

1. Open Arduino IDE
2. Load sketch from `arduino/` folder
3. Connect hardware:

   * HC-SR04 ultrasonic sensor → measure distance (bin fill level)
   * Servo motor → control bin lid
   * ESP8266 → WiFi connectivity
4. Upload code to Arduino Uno
5. Monitor bin fill data via serial monitor or connected cloud service

---

## 🌍 Deployment

* Allows users to upload waste images and get predictions online
* Planned future integration:

  * **Mobile app** with gamification and eco-points
  * **Cloud dashboard** for smart bin monitoring

---

## 🤝 Contribution

Ideas for improvement:

* Expanding dataset with more categories
* Optimizing CNN for mobile deployment (TensorFlow Lite)
* Adding GPS tracking for bins
* Creating an Android/iOS app connected to the system

---



## 👩‍💻 Author

**Fadoua Ounissi**

* Master 2 – Software Engineering, Université Abdelhamid Mehri – Constantine 2
* GitHub: [@fadou4](https://github.com/fadou4)

---

## 🙏 Acknowledgements

* Professors and supervisors from Constantine 2 University
* Open-source communities (TensorFlow, Arduino, Flask)
* Inspiration from IoT-based smart city projects
* The EcoSmart project team and contributors

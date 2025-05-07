#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// Base class representing a generic GUI component
class GUIComponent {
public:
    virtual void draw() const = 0;  // Pure virtual function for drawing the component
    virtual ~GUIComponent() {}  // Virtual destructor for proper cleanup of derived classes
};

// Derived class representing a Button
class Button : public GUIComponent {
private:
    string label;

public:
    Button(const string& label) : label(label) {}

    // Override the draw method for Button
    void draw() const override {
        cout << "Drawing Button: " << label << endl;
    }
};

// Derived class representing a TextBox
class TextBox : public GUIComponent {
private:
    string placeholder;

public:
    TextBox(const string& placeholder) : placeholder(placeholder) {}

    // Override the draw method for TextBox
    void draw() const override {
        cout << "Drawing TextBox with placeholder: " << placeholder << endl;
    }
};

// Derived class representing a Label
class Label : public GUIComponent {
private:
    string text;

public:
    Label(const string& text) : text(text) {}

    // Override the draw method for Label
    void draw() const override {
        cout << "Drawing Label: " << text << endl;
    }
};

// GUI Framework class that holds a collection of components
class GUIFramework {
private:
    vector<shared_ptr<GUIComponent>> components;

public:
    // Method to add a component to the GUI framework
    void addComponent(shared_ptr<GUIComponent> component) {
        components.push_back(component);
    }

    // Method to draw all components
    void render() const {
        for (const auto& component : components) {
            component->draw();  // Polymorphic call to draw the component
        }
    }
};

int main() {
    // Create a GUI framework
    GUIFramework gui;

    // Add different components to the GUI framework
    gui.addComponent(make_shared<Button>("Submit"));
    gui.addComponent(make_shared<TextBox>("Enter text here"));
    gui.addComponent(make_shared<Label>("Welcome to the GUI"));

    // Render (draw) all components
    cout << "Rendering GUI components:" << endl;
    gui.render();

    return 0;
}

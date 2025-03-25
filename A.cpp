### Objective:
Step 1 : Go through all the files in the backend folder mainly focus on routes and controllers and server.js for cors and other information 

Step 2 : after scanning all the files Create a fully functional, responsive, and modern e-commerce app for Dumpit, an online marketplace for construction materials. The app should follow best practices in code structure, UI/UX design, and implement modern features like user authentication, order management, product browsing, and payments, among others. It should be clean, fast, and responsive across devices (mobile and tablet).
and implement and usee all api endpoints in frontend 
detailed requirement 
### Backend Requirements:
Go through each file in the backend (routes, controllers, models, middlewares, utils, etc.) to ensure the system has the following:
- **Authentication**: Implement JWT-based authentication for login/signup/forgot password functionalities. Ensure validation, password hashing, and secure login flows.
- **Orders**: APIs for creating, updating, and tracking orders. Orders should contain information like products, quantities, shipping address, and payment status.
- **Categories**: Create routes for managing product categories (CRUD operations) and ensure the frontend is capable of filtering products based on these categories.
- **Products**: APIs for adding, updating, deleting, and retrieving products, along with details like product description, price, quantity, images, and ratings.
- **Checkout**: Implement checkout APIs for order review, payment gateway integration, and address confirmation.
- **Dashboard for Different Roles**: Create endpoints to differentiate between user roles (Admin, Customer, Shop Owner) and allow proper access to the dashboard and other features.
- **Manage Orders**: Admins should be able to view and manage all customer orders (CRUD operations).
- **Search & Filters**: Develop endpoints for searching products by name, category, price range, etc. Filters should be based on availability, rating, and product specifications.
- **Nearby Shops** :
- **Reviews and Ratings**
- **Payments**: Integrate payment APIs for processing payments securely (Stripe, PayPal, etc.).
- **Utilities**: Implement utility functions for validations, error handling, and logging.

very important note : go through each point  and check if all features are implemeted properly and if not implement correcly fullfill all requriredments and remove redundant code pages etc refracter it both frontend and backend should be synchronised properly 
### Frontend Requirements (React Native with Expo):
1. **Home Screen**:
   - Sleek, modern design inspired by platforms like Stripe and Zomato.
   - Display featured products, categories, and promotions.
   - Use responsive design principles, ensuring a clean and intuitive UI across mobile and tablet views.
   - Implement smooth scrolling and dynamic loading of content.

2. **Login/Signup/Forgot Password Screens**:
   - Simple, clean forms for user authentication.
   - Use modern input fields with validation (email, password).
   - Forgot password screen for password recovery (with validation).
   - Appropriate error handling and form feedback for users.

3. **Orders Screen**:
   - Display list of user orders with order details like product name, quantity, shipping status, and payment status.
   - Provide order tracking options, with ability to view order status updates.
   - Responsive layouts for different screen sizes.

4. **Categories Screen**:
   - Grid-based view displaying all product categories.
   - Users should be able to click on any category to explore products within it.
   - Use images, icons, and text for easy identification of categories.

5. **Products Screen**:
   - Display a list/grid of products with images, names, prices, and ratings.
   - Product cards should have a clean and responsive layout.
   - Each product card should have a button for "Add to Cart" or "View Details."
   - Implement infinite scrolling or pagination for large product lists.

6. **Checkout Screen**:
   - Allow users to review their cart and add/edit shipping information.
   - Show a summary of products, quantities, prices, shipping, and taxes.
   - Integrate a secure payment page (mock data can be used for initial stages).
   - Implement a seamless checkout flow with clear CTA buttons.

7. **Manage Orders Screen** (For Admin):
   - Display all customer orders with filters like status (pending, delivered, canceled).
   - Admins should be able to update order status (e.g., from "Pending" to "Shipped").
   - Implement search functionality for fast access to specific orders.

8. **Dashboard**:
   - Create dashboards with different roles (Admin, Customer, Shop Owner).
   - Admin: View all orders, user management, product management, and sales analytics.
   - Shop Owner: Manage their products, view order history, and product reviews.
   - Customer: View personal orders, cart, and wishlist.

9. **Search and Filter Features**:
   - Implement a search bar at the top of the products screen for searching products by name.
   - Implement filter options for price range, category, and rating.
   - Filters should update the product list dynamically based on user input.

10. **Nearby Shops**:
   - Use geolocation services to identify the user's current location.
   - Fetch nearby shops selling relevant construction materials and display them in a map view and a list.
   - Display basic shop details such as name, address, distance from user, and available products.

11. **Cart Screen**:
   - Display a list of items in the user's cart with the ability to update quantities or remove items.
   - Show the total price and a checkout button.
   - Include clear calls to action for proceeding to checkout or continuing shopping.

12. **Shop/Store Front**:
   - Allow users to view shops by location or category.
   - Display products available at each shop.
   - Include a button to add products to the cart directly from the shop view.
   - Implement reviews and ratings for each shop, allowing users to leave feedback.

13. **Product Detail Screen**:
   - Show a detailed view of the product, including a large image, description, price, quantity available, and customer reviews.
   - Implement an "Add to Cart" button and a "Buy Now" option.
   - Display related products based on category or user interest.

14. **Payments Screen**:
   - Integrate a simple payment gateway (like Stripe or mock data) to process payments.
   - Allow users to choose their preferred payment method (credit card, PayPal, etc.).
   - Show order summary and payment confirmation once the transaction is successful.

### UI/UX Design Principles:
- **Responsive Design**: Ensure the app is usable on various screen sizes (mobile and tablet). Use a grid-based layout and responsive components.
- **Minimalistic Design**: Follow a modern, clean design language like Stripe or Zomato with a focus on usability and clean sleek design with rich colors.
- **User Feedback**: Provide clear visual feedback for interactions (button clicks, form validation errors, loading states, etc.).
- **Consistent Navigation**: Use a tab-based navigation system for easy access to different screens (Home, Cart, Orders, Profile, etc.).
- **Smooth Transitions**: Implement smooth animations between screens to improve the user experience.
  
### Code Structure:
- **Modular & Reusable Code**: Follow SOLID principles to write clean, reusable code. Keep components small and focused.
- **State Management**: Use state management tools (e.g., Context API, Redux, or Zustand) to manage global state like cart items, user authentication status, etc.
- **Navigation**: Implement React Navigation for screen transitions, including Stack and Tab navigators for easy access to screens.
- state should be persistant

### APIs and Mock Data:
- Use mock data for initial development (e.g., mock products, categories, orders, etc.) before connecting to the backend.
- Sample data should represent realistic scenarios, with various product categories, order statuses, and user interactions.

### Testing and Debugging:
- Test UI responsiveness and interactions on multiple devices to ensure compatibility and consistency.
- Ensure error handling is present for API calls and UI components.
- Write unit tests for critical functions and components.

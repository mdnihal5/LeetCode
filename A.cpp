first read and anaylize thsi prompt and list down all requirements 
implement one by one 
check for duplicated and use them i don't need duplicates 
after last make sure you implemnted all the listed down requriements if not implement and do this interative until tis' complete
Create a complete backend application for **Dumpit**, a civil construction quick commerce app, using **Express.js** and **Node.js**. The backend should handle all necessary functionalities for vendors and customers, ensuring a smooth and optimized flow. Here are the key features and requirements for the project:


then first thing what are requirment 
list down and thing how to implement efficiently
how can we rmeove redundancy
is is consistant in all places are we missing anything
how to implement it so that it will become consistant short 
Code should readable and good 
use solid principles and a good folder structure and readable code 

### Core Requirements:
1. **Environment Setup**:
   - Use **dotenv** for configuration and environment variables.
   - Integrate **MongoDB Atlas** for database management.
 like use config file to export all env variables and consttnts etc
2. **Authentication**:
   - Implement **JWT (JSON Web Token)** for user authentication.
   - Include basic JWT authentication with access tokens (no refresh tokens).
   - Provide routes for **Login**, **Signup**, **Logout**, and **Forgot Password** functionality.
   - Ensure proper middleware handling for authenticated routes.
   
3. **User Model**:
   - Fields: `name`, `email`, `password`, `phone`, `role` (Vendor, Customer) and no admin , `avatar_url`, `location`.
[products], [cart], [notifications], [addresses] etc and changes should be in sync 
   - Allow users to **edit** their profile (except email).
   - Ensure **strong password validation** and **hashing** before saving to the database.
   - Add functionality for **role-based access control** (only admins and vendors should be able to perform certain actions).

4. **Address Model**:
   - Fields: `name`, `village`, `street`, `district`, `state`, `pincode`, `phone`.
   - Implement **add/edit/remove** address functionality.

5. **Products Model**:
   - Fields: `name`, `type`, `category`, `rate`, `units`, `discount`, `rating`.
   - Implement CRUD functionality for products (add, edit, delete).
   - Ensure **sync** between products and shops (when a product is added to the shop, it reflects correctly in both the vendor and customer view).

6. **Shop Model**:
   - Fields: `name`, `address`, `products[]`, `rating`.
   - Implement functionality to **add**, **remove**, **edit** shops and manage products within them.
   - Ensure **sync** between shop product details and the cart.

7. **Cart Model**:
   - Handle product additions and removals.
   - Implement logic to **manage the count of products** in the cart and reflect changes.

8. **Order Model**:
   - Fields: Order details including `product`, `quantity`, `total_price`, `status` (e.g., pending, completed, canceled), `created_at`, etc.
   - Implement **order creation**, **order cancellation**, **order update** routes.
   - Handle **checkout flow**, including integration with **Razorpay** for payment.

9. **Notifications**:
   - Integrate **Nodemailer** for email notifications (order status, password reset).
   - Implement **push notifications** for order updates and password reset.
   - Include **notification settings** (opt-in or out for email/push notifications).

10. ** Vendor-specific Features**:
    - **Analytics and Data Export**: Provide routes for exporting user and order data (e.g., CSV export of order history).
    - ** Import and Export Data in specific ( fixed format ) like load data to backend or export data from backend from csv etc
    - Vendors should be able to manage stock by adding/editing/removing products in their shops, which reflects across both customer and vendor views.
    - Ensure **product stock levels** are correctly updated when customers place orders.

11. **Search and Filter**:
    - Implement search and filter functionality for **shops**, **products**, and **categories** using **query params** (e.g., search by name, filter by price, category).
    - Ensure these fields are **required** for the filter and cannot be empty.

12. **Location Tracking**:
    - Implement **location tracking** with integration to a maps API for location-based services.
    - Add user-specific functionality (e.g., tracking delivery address for orders).
13. use console logs with colors for ( method route ex: POST /auth/login ) etc and some good comments in controllers

### Middleware:
- Implement **CORS handling**.
- Add necessary **validation middleware** for incoming requests (e.g., Joi ).
- Ensure **authentication middleware** is properly applied to protected routes.
- Apply **role-based authorization middleware** to ensure only authorized users (vendors/admins) can access certain resources.

### Folder Structure:
- Organize the project using a **modular folder structure**, with separate folders for:
  - **Controllers**: Handle the business logic.
  - **Routes**: Define API routes for various resources.
  - **Models**: Database schema definitions (User, Product, Order, etc.).
  - **Middleware**: Custom middleware for validation, authentication, and authorization.
  - **Services**: For business-specific logic (e.g., payment services, notification services).
  - **Utils**: Helper functions (e.g., for email sending, hashing, etc.).

### Code Quality:
- Use **solid, clean, and modular code** practices.
- Ensure **proper validation** on all models and input fields.
- Remove any **duplicate code**.
- Keep the code **short, efficient**, and **easy to understand**.

### Other Considerations:
- Ensure **proper error handling** and meaningful error messages.
- **Optimized database queries** (use of indexing, pagination, etc.).
- Integrate **Cloudinary** for storing and serving images (product images, user avatars).
- Implement **security best practices** like **password hashing** and **rate limiting**.

### Optional Features:
- Implement **coupon/discount functionality** on orders.
- Enable **user reviews** for products and shops.


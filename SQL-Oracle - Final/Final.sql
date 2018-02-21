-- Danh Tran
-- Email: dtran6@dmacc.edu
-- Final project for CIS 338 - SQL/Oracle - Summer 2017
-- Referenced sources:
-- Textbook
-- https://www.competitivecyclist.com/

CREATE TABLE category
  (category# NUMBER(2),
  categoryname VARCHAR(20) NOT NULL,
  CONSTRAINT category_category#_pk PRIMARY KEY(category#));
CREATE SEQUENCE category#_seq
  START WITH 1;
INSERT INTO category
  VALUES (category#_seq.NEXTVAL, 'light');
INSERT INTO category
  VALUES (category#_seq.NEXTVAL, 'computer');
INSERT INTO category
  VALUES (category#_seq.NEXTVAL, 'tire');
INSERT INTO category
  VALUES (category#_seq.NEXTVAL, 'saddle');
  
CREATE TABLE accessory
  (accessory# NUMBER(4),
  accessoryname VARCHAR2(50) NOT NULL,
  price NUMBER(6,2) NOT NULL,
  description VARCHAR2(50),
  stock NUMBER(3) NOT NULL,
  reorder NUMBER(3),
  category# NUMBER(2),
  CONSTRAINT accessory_accessory#_pk PRIMARY KEY(accessory#),
  CONSTRAINT accessory_category#_fk FOREIGN KEY(category#)
    REFERENCES category (category#));
CREATE SEQUENCE accessory#_seq
  START WITH 1;
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'CatEye Nima Light - Front', 2.95, 20, 5, 1);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'CatEye Volt 300 Headlight', 70, 40, 5, 1);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Lezyne Zecto Drive Light Pair', 24.5, 40, 5, 1);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Garmin Varia Headlight', 199.99, 40, 5, 1);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Exposure RedEye Light', 49.63, 40, 5, 1);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Garmin Edge 520 Bike Computer', 299.99, 30, 5, 2);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Garmin Edge Explore 820 Bike Computer', 349.99, 30, 5, 2);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Pioneer Color Touchscreen Cycle-Computer', 499.99, 30, 5, 2);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Pioneer Touchscreen Cycle-Computer', 299.99, 30, 5, 2);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Michelin Force AM Tire - 29in', 69.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Michelin Force AM Tire - 27.5 x 2.6', 74.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Michelin Force AM Tire - 27.5in', 69.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Clement X''Plor MSO 120 TPI Tire - Clincher', 69.95, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Clement X''Plor MSO 60 TPI Tire - Clincher', 50, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Continental Grand Prix 4 Season Tire - Clincher', 79.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Vittoria Corsa G Plus Tire - Clincher', 69, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Panaracer GravelKing SK Tire - Tubeless', 45.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Panaracer GravelKing 650b Tire - Clincher', 45.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Maxxis Minion DHF 3C/Double Down/TR Tire - 27.5in', 90.1, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Michelin Power Protection + Tire - Clincher', 59.99, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Zipp Tangente SL Speed Tire - Tubular', 100, 100, 20, 3);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Selle SMP Dynamic Saddle', 260, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Selle Italia SLR Kit Carbonio Flow Saddle', 309.99, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Selle SMP Avant Saddle', 270, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Fi''zi:k Antares 00 Carbon Braided Saddle', 399.95, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Selle Italia Flite Flow Saddle', 199.99, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Fi''zi:k Monte Manganese Saddle', 89.99, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'WTB Volt Team Saddle', 129.95, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Ergon SME3 Pro Saddle', 129.95, 30, 5, 4);
INSERT INTO accessory (accessory#, accessoryname, price, stock, reorder, category#)
  VALUES (accessory#_seq.NEXTVAL, 'Fi''zi:k Luce Carbon Saddle - Women''s', 200, 30, 5, 4);
  
CREATE TABLE shipping
  (range# NUMBER(2),
  low NUMBER(2) NOT NULL,
  high NUMBER(2) NOT NULL,
  fee NUMBER(4,2) NOT NULL,
  CONSTRAINT shipping_range#_pk PRIMARY KEY (range#));
INSERT INTO shipping
  VALUES (1, 1, 5, 5);
INSERT INTO shipping
  VALUES (2, 6, 10, 8);
INSERT INTO shipping
  VALUES (3, 11, 99, 11);
  
CREATE TABLE customer
  (customer# NUMBER(4),
  firstname VARCHAR2(20) NOT NULL,
  lastname VARCHAR2(20) NOT NULL,
  address VARCHAR2(50) NOT NULL,
  city VARCHAR2(20) NOT NULL,
  state CHAR(2) NOT NULL,
  zip CHAR(5) NOT NULL,
  phone CHAR(10),
  email VARCHAR2(30),
  CONSTRAINT customer_customer#_pk PRIMARY KEY (customer#));
CREATE SEQUENCE customer#_seq
  START WITH 1;
INSERT INTO customer
  VALUES (customer#_seq.NEXTVAL, 'Peter', 'Parker', '1 Queens', 'New York', 'NY', '67233', '1013217384', 'spider@web.net');
  
CREATE TABLE orders
  (order# NUMBER(4),
  quantity NUMBER(3) DEFAULT 0,
  subtotal NUMBER(7,2) DEFAULT 0,
  tax NUMBER(5,2) DEFAULT 0,
  ship NUMBER(4,2) DEFAULT 0,
  total NUMBER(8,2) DEFAULT 0,
  orderplaced NUMBER(1) DEFAULT 0,
  customer# NUMBER(4),
  CONSTRAINT order_order#_pk PRIMARY KEY (order#),
  CONSTRAINT order_customer#_fk FOREIGN KEY (customer#)
    REFERENCES customer (customer#));
CREATE SEQUENCE order#_seq
  START WITH 1;
INSERT INTO orders (order#, customer#)
  VALUES (order#_seq.NEXTVAL, 1);

CREATE TABLE orderitem
  (orderitem# NUMBER(4),
  order# NUMBER(4),
  accessory# NUMBER(4),
  quantity NUMBER(2) NOT NULL,
  CONSTRAINT orderitem_orderitem#_pk PRIMARY KEY (orderitem#),
  CONSTRAINT orderitem_order#_fk FOREIGN KEY (order#)
    REFERENCES orders (order#),
  CONSTRAINT orderitem_accessory#_fk FOREIGN KEY (accessory#)
    REFERENCES accessory (accessory#));
CREATE SEQUENCE orderitem#_seq
  START WITH 1;

CREATE OR REPLACE FUNCTION taxcalculation_sf
  (p_sub IN orders.subtotal%TYPE)
  RETURN NUMBER
  AS
    lv_tax_num orders.tax%TYPE;
  BEGIN
    lv_tax_num := p_sub * .06;
    RETURN lv_tax_num;
  END;
/
CREATE OR REPLACE PROCEDURE shippingcalculation_sp
  (p_quantity IN orders.quantity%TYPE,
  p_ship OUT orders.ship%TYPE)
  AS
  BEGIN
    SELECT fee
      INTO p_ship
      FROM shipping
      WHERE p_quantity BETWEEN low AND high;
  EXCEPTION
    WHEN NO_DATA_FOUND THEN
      p_ship := 0;
  END;
/
-- Update subtotal, tax, shipping, and total for an order after a change in orderitem list
CREATE OR REPLACE TRIGGER updateorder_trg
  AFTER INSERT OR DELETE OR UPDATE OF quantity ON orderitem
  FOR EACH ROW
  DECLARE
    lv_price_num accessory.price%TYPE;
    lv_quantity_num orders.quantity%TYPE;
    lv_sub_num orders.subtotal%TYPE;
    lv_tax_num orders.tax%TYPE;
    lv_ship_num orders.ship%TYPE;
    lv_total_num orders.total%TYPE;
  BEGIN
    IF UPDATING ('quantity') THEN
      SELECT price
        INTO lv_price_num
        FROM accessory
        WHERE accessory# = :NEW.accessory#;
      SELECT subtotal, quantity
        INTO lv_sub_num, lv_quantity_num
        FROM orders
        WHERE order# = :NEW.order#;
      lv_quantity_num := lv_quantity_num - :OLD.quantity + :NEW.quantity;
      lv_sub_num := lv_sub_num - (:OLD.quantity - :NEW.quantity) * lv_price_num;
      lv_tax_num := taxcalculation_sf(lv_sub_num);
      shippingcalculation_sp(lv_quantity_num, lv_ship_num);
      lv_total_num := lv_sub_num + lv_tax_num + lv_ship_num;
      UPDATE orders
        SET quantity = lv_quantity_num,
            subtotal = lv_sub_num,
            tax = lv_tax_num,
            ship = lv_ship_num,
            total = lv_total_num
        WHERE order# = :NEW.order#;
    END IF;
    IF DELETING THEN
      SELECT price
        INTO lv_price_num
        FROM accessory
        WHERE accessory# = :OLD.accessory#;
      SELECT subtotal, quantity
        INTO lv_sub_num, lv_quantity_num
        FROM orders
        WHERE order# = :OLD.order#;
      lv_quantity_num := lv_quantity_num - :OLD.quantity;
      lv_sub_num := lv_sub_num - :OLD.quantity * lv_price_num;
      lv_tax_num := taxcalculation_sf(lv_sub_num);
      shippingcalculation_sp(lv_quantity_num, lv_ship_num);
      lv_total_num := lv_sub_num + lv_tax_num + lv_ship_num;
      UPDATE orders
        SET quantity = lv_quantity_num,
            subtotal = lv_sub_num,
            tax = lv_tax_num,
            ship = lv_ship_num,
            total = lv_total_num
        WHERE order# = :OLD.order#;
    END IF;
    IF INSERTING THEN
      SELECT price
        INTO lv_price_num
        FROM accessory
        WHERE accessory# = :NEW.accessory#;
      SELECT subtotal, quantity
        INTO lv_sub_num, lv_quantity_num
        FROM orders
        WHERE order# = :NEW.order#;
      lv_quantity_num := lv_quantity_num + :NEW.quantity;
      lv_sub_num := lv_sub_num + :NEW.quantity * lv_price_num;
      lv_tax_num := taxcalculation_sf(lv_sub_num);
      shippingcalculation_sp(lv_quantity_num, lv_ship_num);
      lv_total_num := lv_sub_num + lv_tax_num + lv_ship_num;
      UPDATE orders
        SET quantity = lv_quantity_num,
            subtotal = lv_sub_num,
            tax = lv_tax_num,
            ship = lv_ship_num,
            total = lv_total_num
        WHERE order# = :NEW.order#;
    END IF;
  END;
/
-- Add an item into an order
CREATE OR REPLACE PROCEDURE additem_sp
  (p_order# IN orders.order#%TYPE,
  p_accessory# IN accessory.accessory#%TYPE,
  p_quantity IN orderitem.quantity%TYPE)
  AS
    lv_instock_num accessory.stock%TYPE;
    ex_insufficient_stock EXCEPTION;
  BEGIN
    SELECT stock
      INTO lv_instock_num
      FROM accessory
      WHERE accessory# = p_accessory#;
    IF lv_instock_num < p_quantity THEN
      RAISE ex_insufficient_stock;
    END IF;
    INSERT INTO orderitem
      VALUES (orderitem#_seq.NEXTVAL, p_order#, p_accessory#, p_quantity);
  EXCEPTION
    WHEN NO_DATA_FOUND THEN
      DBMS_OUTPUT.PUT_LINE('Recheck accessory number and order number');
    WHEN ex_insufficient_stock THEN
      DBMS_OUTPUT.PUT_LINE('Not enough items in stock');
  END;
/
-- Update an item quantity in an order
CREATE OR REPLACE PROCEDURE edititem_sp
  (p_orderitem# IN orderitem.orderitem#%TYPE,
  p_quantity IN orderitem.quantity%TYPE)
  AS
    lv_instock_num accessory.stock%TYPE;
    ex_insufficient_stock EXCEPTION;
  BEGIN
    SELECT stock
      INTO lv_instock_num
      FROM accessory JOIN orderitem USING (accessory#)
      WHERE orderitem# = p_orderitem#;
    IF lv_instock_num < p_quantity THEN
      RAISE ex_insufficient_stock;
    END IF;
    UPDATE orderitem
      SET quantity = p_quantity
      WHERE orderitem# = p_orderitem#;
  EXCEPTION
    WHEN NO_DATA_FOUND THEN
      DBMS_OUTPUT.PUT_LINE('Recheck orderitem number');
    WHEN ex_insufficient_stock THEN
      DBMS_OUTPUT.PUT_LINE('Not enough items in stock');
  END;
/
-- Update inventory after a purchase is made
CREATE OR REPLACE TRIGGER updateinventory_trg
  AFTER UPDATE OF orderplaced ON orders
  FOR EACH ROW
  WHEN (OLD.orderplaced = 0)
  DECLARE
    CURSOR cur_item IS
      SELECT accessory#, quantity
        FROM orderitem
        WHERE order# = :OLD.order#;
  BEGIN
    FOR rec_item IN cur_item LOOP
      UPDATE accessory
        SET stock = stock - rec_item.quantity
        WHERE accessory# = rec_item.accessory#;
    END LOOP;
  END;
/
-- find accessories by providing category name such as light, computer, tire, saddle
CREATE OR REPLACE PROCEDURE findaccessory_sp
  (p_categoryname IN category.categoryname%TYPE)
  AS
    CURSOR cur_item IS
      SELECT accessory#, accessoryname, price, description, stock
      FROM accessory JOIN category USING (category#)
      WHERE categoryname = p_categoryname;
  BEGIN
    FOR rec_item IN cur_item LOOP
      DBMS_OUTPUT.PUT_LINE(rec_item.accessory# ||', '|| rec_item.accessoryname ||', '||
                rec_item.price ||', '|| rec_item.description ||', '|| rec_item.stock);
    END LOOP;
  END;
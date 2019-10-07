#ifndef ShoppingCart_h
#define ShoppingCart_h

class ShoppingCart {
   public:
      ShoppingCart(string custName, string date);
      void AddToCart();
      void RemoveFromCart();
      void UpdateQuantity();
      string GetName();
      string GetDate();
      int GetQuantity();
      double GetTotalCost();
      void PrintCostAndQuantity();
      void PrintDescription();

	private:
      string custName;
      string date;
      vector<string> items;
};

#endif

package controller;

import model.Account;
import model.AccountDao;
import model.AccountDaoInDatabase;
import model.GradeDaoInDatabase;

public class TestController {
	
	public static void main(String[] args) {
		GradeDaoInDatabase dao = new GradeDaoInDatabase();
		
		System.out.println(dao.findGradeAverageByAccountId(1));
	}
}

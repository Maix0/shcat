/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1429.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7145(t_small_parse_table_array *v)
{
	v->a[142900] = sym_raw_string;
	v->a[142901] = anon_sym_RBRACE3;
	v->a[142902] = 5;
	v->a[142903] = actions(17);
	v->a[142904] = 1;
	v->a[142905] = anon_sym_LPAREN;
	v->a[142906] = actions(21);
	v->a[142907] = 1;
	v->a[142908] = anon_sym_LBRACE;
	v->a[142909] = actions(57);
	v->a[142910] = 1;
	v->a[142911] = sym_comment;
	v->a[142912] = actions(8521);
	v->a[142913] = 1;
	v->a[142914] = anon_sym_if;
	v->a[142915] = state(2589);
	v->a[142916] = 3;
	v->a[142917] = sym_if_statement;
	v->a[142918] = sym_compound_statement;
	v->a[142919] = sym_subshell;
	small_parse_table_7146(v);
}

void	small_parse_table_7146(t_small_parse_table_array *v)
{
	v->a[142920] = 6;
	v->a[142921] = actions(57);
	v->a[142922] = 1;
	v->a[142923] = sym_comment;
	v->a[142924] = actions(4632);
	v->a[142925] = 1;
	v->a[142926] = anon_sym_DOLLAR_LBRACE;
	v->a[142927] = actions(4634);
	v->a[142928] = 1;
	v->a[142929] = anon_sym_DOLLAR_LPAREN;
	v->a[142930] = actions(4636);
	v->a[142931] = 1;
	v->a[142932] = anon_sym_BQUOTE;
	v->a[142933] = actions(4638);
	v->a[142934] = 1;
	v->a[142935] = anon_sym_DOLLAR_BQUOTE;
	v->a[142936] = state(1665);
	v->a[142937] = 2;
	v->a[142938] = sym_expansion;
	v->a[142939] = sym_command_substitution;
	small_parse_table_7147(v);
}

void	small_parse_table_7147(t_small_parse_table_array *v)
{
	v->a[142940] = 6;
	v->a[142941] = actions(57);
	v->a[142942] = 1;
	v->a[142943] = sym_comment;
	v->a[142944] = actions(6370);
	v->a[142945] = 1;
	v->a[142946] = anon_sym_DOLLAR_LBRACE;
	v->a[142947] = actions(6372);
	v->a[142948] = 1;
	v->a[142949] = anon_sym_BQUOTE;
	v->a[142950] = actions(6374);
	v->a[142951] = 1;
	v->a[142952] = anon_sym_DOLLAR_BQUOTE;
	v->a[142953] = actions(8557);
	v->a[142954] = 1;
	v->a[142955] = anon_sym_DOLLAR_LPAREN;
	v->a[142956] = state(850);
	v->a[142957] = 2;
	v->a[142958] = sym_expansion;
	v->a[142959] = sym_command_substitution;
	small_parse_table_7148(v);
}

void	small_parse_table_7148(t_small_parse_table_array *v)
{
	v->a[142960] = 6;
	v->a[142961] = actions(57);
	v->a[142962] = 1;
	v->a[142963] = sym_comment;
	v->a[142964] = actions(8495);
	v->a[142965] = 1;
	v->a[142966] = anon_sym_elif;
	v->a[142967] = actions(8497);
	v->a[142968] = 1;
	v->a[142969] = anon_sym_else;
	v->a[142970] = actions(8559);
	v->a[142971] = 1;
	v->a[142972] = anon_sym_fi;
	v->a[142973] = state(3882);
	v->a[142974] = 1;
	v->a[142975] = sym_else_clause;
	v->a[142976] = state(3412);
	v->a[142977] = 2;
	v->a[142978] = sym_elif_clause;
	v->a[142979] = aux_sym_if_statement_repeat1;
	small_parse_table_7149(v);
}

void	small_parse_table_7149(t_small_parse_table_array *v)
{
	v->a[142980] = 6;
	v->a[142981] = actions(57);
	v->a[142982] = 1;
	v->a[142983] = sym_comment;
	v->a[142984] = actions(8545);
	v->a[142985] = 1;
	v->a[142986] = anon_sym_PIPE;
	v->a[142987] = actions(8561);
	v->a[142988] = 1;
	v->a[142989] = anon_sym_RPAREN;
	v->a[142990] = state(3382);
	v->a[142991] = 1;
	v->a[142992] = aux_sym_concatenation_repeat1;
	v->a[142993] = state(3521);
	v->a[142994] = 1;
	v->a[142995] = aux_sym_case_item_repeat1;
	v->a[142996] = actions(8549);
	v->a[142997] = 2;
	v->a[142998] = sym__concat;
	v->a[142999] = aux_sym_concatenation_token1;
	small_parse_table_7150(v);
}

/* EOF small_parse_table_1429.c */

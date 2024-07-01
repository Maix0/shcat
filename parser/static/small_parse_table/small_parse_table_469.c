/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_469.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2345(t_small_parse_table_array *v)
{
	v->a[46900] = sym_word;
	v->a[46901] = 18;
	v->a[46902] = actions(3);
	v->a[46903] = 1;
	v->a[46904] = sym_comment;
	v->a[46905] = actions(1634);
	v->a[46906] = 1;
	v->a[46907] = anon_sym_LPAREN;
	v->a[46908] = actions(1638);
	v->a[46909] = 1;
	v->a[46910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46911] = actions(1640);
	v->a[46912] = 1;
	v->a[46913] = anon_sym_DOLLAR;
	v->a[46914] = actions(1642);
	v->a[46915] = 1;
	v->a[46916] = anon_sym_DQUOTE;
	v->a[46917] = actions(1644);
	v->a[46918] = 1;
	v->a[46919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2346(v);
}

void	small_parse_table_2346(t_small_parse_table_array *v)
{
	v->a[46920] = actions(1646);
	v->a[46921] = 1;
	v->a[46922] = anon_sym_DOLLAR_LPAREN;
	v->a[46923] = actions(1648);
	v->a[46924] = 1;
	v->a[46925] = anon_sym_BQUOTE;
	v->a[46926] = actions(1650);
	v->a[46927] = 1;
	v->a[46928] = sym_extglob_pattern;
	v->a[46929] = actions(1711);
	v->a[46930] = 1;
	v->a[46931] = anon_sym_esac;
	v->a[46932] = state(995);
	v->a[46933] = 1;
	v->a[46934] = sym_terminator;
	v->a[46935] = state(1088);
	v->a[46936] = 1;
	v->a[46937] = aux_sym_case_statement_repeat1;
	v->a[46938] = state(1713);
	v->a[46939] = 1;
	small_parse_table_2347(v);
}

void	small_parse_table_2347(t_small_parse_table_array *v)
{
	v->a[46940] = sym_case_item;
	v->a[46941] = state(1972);
	v->a[46942] = 1;
	v->a[46943] = sym__case_item_last;
	v->a[46944] = state(1871);
	v->a[46945] = 2;
	v->a[46946] = sym_concatenation;
	v->a[46947] = sym__extglob_blob;
	v->a[46948] = actions(1630);
	v->a[46949] = 3;
	v->a[46950] = sym_raw_string;
	v->a[46951] = sym_number;
	v->a[46952] = sym_word;
	v->a[46953] = actions(1636);
	v->a[46954] = 4;
	v->a[46955] = anon_sym_SEMI_SEMI;
	v->a[46956] = aux_sym_heredoc_redirect_token1;
	v->a[46957] = anon_sym_AMP;
	v->a[46958] = anon_sym_SEMI;
	v->a[46959] = state(1804);
	small_parse_table_2348(v);
}

void	small_parse_table_2348(t_small_parse_table_array *v)
{
	v->a[46960] = 5;
	v->a[46961] = sym_arithmetic_expansion;
	v->a[46962] = sym_string;
	v->a[46963] = sym_simple_expansion;
	v->a[46964] = sym_expansion;
	v->a[46965] = sym_command_substitution;
	v->a[46966] = 3;
	v->a[46967] = actions(3);
	v->a[46968] = 1;
	v->a[46969] = sym_comment;
	v->a[46970] = actions(1402);
	v->a[46971] = 2;
	v->a[46972] = sym_file_descriptor;
	v->a[46973] = sym_variable_name;
	v->a[46974] = actions(1400);
	v->a[46975] = 25;
	v->a[46976] = anon_sym_for;
	v->a[46977] = anon_sym_while;
	v->a[46978] = anon_sym_until;
	v->a[46979] = anon_sym_if;
	small_parse_table_2349(v);
}

void	small_parse_table_2349(t_small_parse_table_array *v)
{
	v->a[46980] = anon_sym_case;
	v->a[46981] = anon_sym_LPAREN;
	v->a[46982] = anon_sym_LBRACE;
	v->a[46983] = anon_sym_RBRACE;
	v->a[46984] = anon_sym_BANG;
	v->a[46985] = anon_sym_LT;
	v->a[46986] = anon_sym_GT;
	v->a[46987] = anon_sym_GT_GT;
	v->a[46988] = anon_sym_LT_AMP;
	v->a[46989] = anon_sym_GT_AMP;
	v->a[46990] = anon_sym_GT_PIPE;
	v->a[46991] = anon_sym_LT_GT;
	v->a[46992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46993] = anon_sym_DOLLAR;
	v->a[46994] = anon_sym_DQUOTE;
	v->a[46995] = sym_raw_string;
	v->a[46996] = sym_number;
	v->a[46997] = anon_sym_DOLLAR_LBRACE;
	v->a[46998] = anon_sym_DOLLAR_LPAREN;
	v->a[46999] = anon_sym_BQUOTE;
	small_parse_table_2350(v);
}

/* EOF small_parse_table_469.c */

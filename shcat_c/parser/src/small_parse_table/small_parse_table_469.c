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
	v->a[46900] = actions(3);
	v->a[46901] = 1;
	v->a[46902] = sym_comment;
	v->a[46903] = actions(1235);
	v->a[46904] = 1;
	v->a[46905] = sym_test_operator;
	v->a[46906] = actions(5086);
	v->a[46907] = 1;
	v->a[46908] = anon_sym_DQUOTE;
	v->a[46909] = actions(5090);
	v->a[46910] = 1;
	v->a[46911] = sym_variable_name;
	v->a[46912] = state(2442);
	v->a[46913] = 1;
	v->a[46914] = sym_string;
	v->a[46915] = actions(5088);
	v->a[46916] = 2;
	v->a[46917] = aux_sym__simple_variable_name_token1;
	v->a[46918] = aux_sym__multiline_variable_name_token1;
	v->a[46919] = actions(5084);
	small_parse_table_2346(v);
}

void	small_parse_table_2346(t_small_parse_table_array *v)
{
	v->a[46920] = 9;
	v->a[46921] = anon_sym_DASH;
	v->a[46922] = anon_sym_STAR;
	v->a[46923] = anon_sym_BANG;
	v->a[46924] = anon_sym_QMARK;
	v->a[46925] = anon_sym_DOLLAR;
	v->a[46926] = anon_sym_POUND;
	v->a[46927] = anon_sym_AT2;
	v->a[46928] = anon_sym_0;
	v->a[46929] = anon_sym__;
	v->a[46930] = actions(1227);
	v->a[46931] = 33;
	v->a[46932] = anon_sym_EQ;
	v->a[46933] = anon_sym_PLUS_PLUS;
	v->a[46934] = anon_sym_DASH_DASH;
	v->a[46935] = anon_sym_PLUS_EQ;
	v->a[46936] = anon_sym_DASH_EQ;
	v->a[46937] = anon_sym_STAR_EQ;
	v->a[46938] = anon_sym_SLASH_EQ;
	v->a[46939] = anon_sym_PERCENT_EQ;
	small_parse_table_2347(v);
}

void	small_parse_table_2347(t_small_parse_table_array *v)
{
	v->a[46940] = anon_sym_STAR_STAR_EQ;
	v->a[46941] = anon_sym_LT_LT_EQ;
	v->a[46942] = anon_sym_GT_GT_EQ;
	v->a[46943] = anon_sym_AMP_EQ;
	v->a[46944] = anon_sym_CARET_EQ;
	v->a[46945] = anon_sym_PIPE_EQ;
	v->a[46946] = anon_sym_PIPE_PIPE;
	v->a[46947] = anon_sym_AMP_AMP;
	v->a[46948] = anon_sym_PIPE;
	v->a[46949] = anon_sym_CARET;
	v->a[46950] = anon_sym_AMP;
	v->a[46951] = anon_sym_EQ_EQ;
	v->a[46952] = anon_sym_BANG_EQ;
	v->a[46953] = anon_sym_LT;
	v->a[46954] = anon_sym_GT;
	v->a[46955] = anon_sym_LT_EQ;
	v->a[46956] = anon_sym_GT_EQ;
	v->a[46957] = anon_sym_LT_LT;
	v->a[46958] = anon_sym_GT_GT;
	v->a[46959] = anon_sym_PLUS;
	small_parse_table_2348(v);
}

void	small_parse_table_2348(t_small_parse_table_array *v)
{
	v->a[46960] = anon_sym_SLASH;
	v->a[46961] = anon_sym_PERCENT;
	v->a[46962] = anon_sym_STAR_STAR;
	v->a[46963] = anon_sym_RBRACK_RBRACK;
	v->a[46964] = anon_sym_EQ_TILDE;
	v->a[46965] = 3;
	v->a[46966] = actions(3);
	v->a[46967] = 1;
	v->a[46968] = sym_comment;
	v->a[46969] = actions(1322);
	v->a[46970] = 7;
	v->a[46971] = sym_file_descriptor;
	v->a[46972] = sym__concat;
	v->a[46973] = sym_test_operator;
	v->a[46974] = sym__bare_dollar;
	v->a[46975] = sym__brace_start;
	v->a[46976] = ts_builtin_sym_end;
	v->a[46977] = aux_sym_heredoc_redirect_token1;
	v->a[46978] = actions(1320);
	v->a[46979] = 41;
	small_parse_table_2349(v);
}

void	small_parse_table_2349(t_small_parse_table_array *v)
{
	v->a[46980] = anon_sym_LPAREN_LPAREN;
	v->a[46981] = anon_sym_SEMI;
	v->a[46982] = anon_sym_PIPE_PIPE;
	v->a[46983] = anon_sym_AMP_AMP;
	v->a[46984] = anon_sym_PIPE;
	v->a[46985] = anon_sym_AMP;
	v->a[46986] = anon_sym_EQ_EQ;
	v->a[46987] = anon_sym_LT;
	v->a[46988] = anon_sym_GT;
	v->a[46989] = anon_sym_LT_LT;
	v->a[46990] = anon_sym_GT_GT;
	v->a[46991] = anon_sym_LPAREN;
	v->a[46992] = anon_sym_SEMI_SEMI;
	v->a[46993] = anon_sym_PIPE_AMP;
	v->a[46994] = anon_sym_EQ_TILDE;
	v->a[46995] = anon_sym_AMP_GT;
	v->a[46996] = anon_sym_AMP_GT_GT;
	v->a[46997] = anon_sym_LT_AMP;
	v->a[46998] = anon_sym_GT_AMP;
	v->a[46999] = anon_sym_GT_PIPE;
	small_parse_table_2350(v);
}

/* EOF small_parse_table_469.c */

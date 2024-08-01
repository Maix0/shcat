/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_269.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1345(t_small_parse_table_array *v)
{
	v->a[26900] = anon_sym_AMP_AMP;
	v->a[26901] = anon_sym_PIPE_PIPE;
	v->a[26902] = anon_sym_LT;
	v->a[26903] = anon_sym_GT;
	v->a[26904] = anon_sym_GT_GT;
	v->a[26905] = anon_sym_LT_LT;
	v->a[26906] = aux_sym_heredoc_redirect_token1;
	v->a[26907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26908] = anon_sym_DOLLAR;
	v->a[26909] = anon_sym_DQUOTE;
	v->a[26910] = sym_raw_string;
	v->a[26911] = sym_number;
	v->a[26912] = anon_sym_DOLLAR_LBRACE;
	v->a[26913] = anon_sym_DOLLAR_LPAREN;
	v->a[26914] = anon_sym_BQUOTE;
	v->a[26915] = sym_word;
	v->a[26916] = anon_sym_SEMI;
	v->a[26917] = 3;
	v->a[26918] = actions(3);
	v->a[26919] = 1;
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = sym_comment;
	v->a[26921] = actions(1003);
	v->a[26922] = 1;
	v->a[26923] = sym_variable_name;
	v->a[26924] = actions(1001);
	v->a[26925] = 22;
	v->a[26926] = anon_sym_for;
	v->a[26927] = anon_sym_while;
	v->a[26928] = anon_sym_until;
	v->a[26929] = anon_sym_done;
	v->a[26930] = anon_sym_if;
	v->a[26931] = anon_sym_then;
	v->a[26932] = anon_sym_case;
	v->a[26933] = anon_sym_LPAREN;
	v->a[26934] = anon_sym_LBRACE;
	v->a[26935] = anon_sym_BANG;
	v->a[26936] = anon_sym_LT;
	v->a[26937] = anon_sym_GT;
	v->a[26938] = anon_sym_GT_GT;
	v->a[26939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = anon_sym_DOLLAR;
	v->a[26941] = anon_sym_DQUOTE;
	v->a[26942] = sym_raw_string;
	v->a[26943] = sym_number;
	v->a[26944] = anon_sym_DOLLAR_LBRACE;
	v->a[26945] = anon_sym_DOLLAR_LPAREN;
	v->a[26946] = anon_sym_BQUOTE;
	v->a[26947] = sym_word;
	v->a[26948] = 3;
	v->a[26949] = actions(3);
	v->a[26950] = 1;
	v->a[26951] = sym_comment;
	v->a[26952] = actions(1087);
	v->a[26953] = 2;
	v->a[26954] = sym__concat;
	v->a[26955] = sym_variable_name;
	v->a[26956] = actions(1089);
	v->a[26957] = 21;
	v->a[26958] = anon_sym_PIPE;
	v->a[26959] = anon_sym_RPAREN;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = anon_sym_SEMI_SEMI;
	v->a[26961] = anon_sym_AMP_AMP;
	v->a[26962] = anon_sym_PIPE_PIPE;
	v->a[26963] = anon_sym_LT;
	v->a[26964] = anon_sym_GT;
	v->a[26965] = anon_sym_GT_GT;
	v->a[26966] = anon_sym_LT_LT;
	v->a[26967] = aux_sym_heredoc_redirect_token1;
	v->a[26968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26969] = aux_sym_concatenation_token1;
	v->a[26970] = anon_sym_DOLLAR;
	v->a[26971] = anon_sym_DQUOTE;
	v->a[26972] = sym_raw_string;
	v->a[26973] = sym_number;
	v->a[26974] = anon_sym_DOLLAR_LBRACE;
	v->a[26975] = anon_sym_DOLLAR_LPAREN;
	v->a[26976] = anon_sym_BQUOTE;
	v->a[26977] = sym_word;
	v->a[26978] = anon_sym_SEMI;
	v->a[26979] = 3;
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = actions(3);
	v->a[26981] = 1;
	v->a[26982] = sym_comment;
	v->a[26983] = actions(1108);
	v->a[26984] = 3;
	v->a[26985] = sym__concat;
	v->a[26986] = sym_variable_name;
	v->a[26987] = ts_builtin_sym_end;
	v->a[26988] = actions(1106);
	v->a[26989] = 20;
	v->a[26990] = anon_sym_PIPE;
	v->a[26991] = anon_sym_SEMI_SEMI;
	v->a[26992] = anon_sym_AMP_AMP;
	v->a[26993] = anon_sym_PIPE_PIPE;
	v->a[26994] = anon_sym_LT;
	v->a[26995] = anon_sym_GT;
	v->a[26996] = anon_sym_GT_GT;
	v->a[26997] = anon_sym_LT_LT;
	v->a[26998] = aux_sym_heredoc_redirect_token1;
	v->a[26999] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */

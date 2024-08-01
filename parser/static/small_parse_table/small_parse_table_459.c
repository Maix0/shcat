/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_459.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2295(t_small_parse_table_array *v)
{
	v->a[45900] = anon_sym_LT_LT;
	v->a[45901] = anon_sym_BQUOTE;
	v->a[45902] = anon_sym_SEMI;
	v->a[45903] = 6;
	v->a[45904] = actions(3);
	v->a[45905] = 1;
	v->a[45906] = sym_comment;
	v->a[45907] = actions(2013);
	v->a[45908] = 1;
	v->a[45909] = sym_string_content;
	v->a[45910] = actions(2017);
	v->a[45911] = 1;
	v->a[45912] = sym_variable_name;
	v->a[45913] = actions(2037);
	v->a[45914] = 1;
	v->a[45915] = anon_sym_DQUOTE;
	v->a[45916] = actions(2015);
	v->a[45917] = 2;
	v->a[45918] = aux_sym__simple_variable_name_token1;
	v->a[45919] = aux_sym__multiline_variable_name_token1;
	small_parse_table_2296(v);
}

void	small_parse_table_2296(t_small_parse_table_array *v)
{
	v->a[45920] = actions(2009);
	v->a[45921] = 8;
	v->a[45922] = anon_sym_BANG;
	v->a[45923] = anon_sym_DASH;
	v->a[45924] = anon_sym_STAR;
	v->a[45925] = anon_sym_QMARK;
	v->a[45926] = anon_sym_DOLLAR;
	v->a[45927] = anon_sym_POUND;
	v->a[45928] = anon_sym_AT;
	v->a[45929] = anon_sym_0;
	v->a[45930] = 8;
	v->a[45931] = actions(3);
	v->a[45932] = 1;
	v->a[45933] = sym_comment;
	v->a[45934] = actions(597);
	v->a[45935] = 1;
	v->a[45936] = anon_sym_LT_LT;
	v->a[45937] = actions(1870);
	v->a[45938] = 1;
	v->a[45939] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2297(v);
}

void	small_parse_table_2297(t_small_parse_table_array *v)
{
	v->a[45940] = state(573);
	v->a[45941] = 1;
	v->a[45942] = sym_terminator;
	v->a[45943] = actions(593);
	v->a[45944] = 2;
	v->a[45945] = anon_sym_SEMI_SEMI;
	v->a[45946] = anon_sym_SEMI;
	v->a[45947] = actions(769);
	v->a[45948] = 2;
	v->a[45949] = anon_sym_AMP_AMP;
	v->a[45950] = anon_sym_PIPE_PIPE;
	v->a[45951] = actions(1924);
	v->a[45952] = 3;
	v->a[45953] = anon_sym_LT;
	v->a[45954] = anon_sym_GT;
	v->a[45955] = anon_sym_GT_GT;
	v->a[45956] = state(1040);
	v->a[45957] = 3;
	v->a[45958] = sym_file_redirect;
	v->a[45959] = sym_heredoc_redirect;
	small_parse_table_2298(v);
}

void	small_parse_table_2298(t_small_parse_table_array *v)
{
	v->a[45960] = aux_sym_redirected_statement_repeat1;
	v->a[45961] = 3;
	v->a[45962] = actions(3);
	v->a[45963] = 1;
	v->a[45964] = sym_comment;
	v->a[45965] = actions(2039);
	v->a[45966] = 2;
	v->a[45967] = ts_builtin_sym_end;
	v->a[45968] = aux_sym_heredoc_redirect_token1;
	v->a[45969] = actions(2041);
	v->a[45970] = 11;
	v->a[45971] = anon_sym_PIPE;
	v->a[45972] = anon_sym_RPAREN;
	v->a[45973] = anon_sym_SEMI_SEMI;
	v->a[45974] = anon_sym_AMP_AMP;
	v->a[45975] = anon_sym_PIPE_PIPE;
	v->a[45976] = anon_sym_LT;
	v->a[45977] = anon_sym_GT;
	v->a[45978] = anon_sym_GT_GT;
	v->a[45979] = anon_sym_LT_LT;
	small_parse_table_2299(v);
}

void	small_parse_table_2299(t_small_parse_table_array *v)
{
	v->a[45980] = anon_sym_BQUOTE;
	v->a[45981] = anon_sym_SEMI;
	v->a[45982] = 3;
	v->a[45983] = actions(3);
	v->a[45984] = 1;
	v->a[45985] = sym_comment;
	v->a[45986] = actions(2043);
	v->a[45987] = 2;
	v->a[45988] = ts_builtin_sym_end;
	v->a[45989] = aux_sym_heredoc_redirect_token1;
	v->a[45990] = actions(2045);
	v->a[45991] = 11;
	v->a[45992] = anon_sym_PIPE;
	v->a[45993] = anon_sym_RPAREN;
	v->a[45994] = anon_sym_SEMI_SEMI;
	v->a[45995] = anon_sym_AMP_AMP;
	v->a[45996] = anon_sym_PIPE_PIPE;
	v->a[45997] = anon_sym_LT;
	v->a[45998] = anon_sym_GT;
	v->a[45999] = anon_sym_GT_GT;
	small_parse_table_2300(v);
}

/* EOF small_parse_table_459.c */

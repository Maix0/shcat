/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_230.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1150(t_small_parse_table_array *v)
{
	v->a[23000] = 1;
	v->a[23001] = sym_file_descriptor;
	v->a[23002] = actions(806);
	v->a[23003] = 1;
	v->a[23004] = ts_builtin_sym_end;
	v->a[23005] = actions(812);
	v->a[23006] = 1;
	v->a[23007] = sym_variable_name;
	v->a[23008] = state(690);
	v->a[23009] = 1;
	v->a[23010] = sym_terminator;
	v->a[23011] = actions(790);
	v->a[23012] = 2;
	v->a[23013] = anon_sym_LT_LT;
	v->a[23014] = anon_sym_LT_LT_DASH;
	v->a[23015] = actions(810);
	v->a[23016] = 2;
	v->a[23017] = anon_sym_AMP_AMP;
	v->a[23018] = anon_sym_PIPE_PIPE;
	v->a[23019] = state(1048);
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = 2;
	v->a[23021] = sym_variable_assignment;
	v->a[23022] = aux_sym__variable_assignments_repeat1;
	v->a[23023] = actions(808);
	v->a[23024] = 3;
	v->a[23025] = anon_sym_SEMI_SEMI;
	v->a[23026] = aux_sym_heredoc_redirect_token1;
	v->a[23027] = anon_sym_SEMI;
	v->a[23028] = state(1046);
	v->a[23029] = 3;
	v->a[23030] = sym_file_redirect;
	v->a[23031] = sym_heredoc_redirect;
	v->a[23032] = aux_sym_redirected_statement_repeat1;
	v->a[23033] = actions(780);
	v->a[23034] = 16;
	v->a[23035] = anon_sym_LT;
	v->a[23036] = anon_sym_GT;
	v->a[23037] = anon_sym_GT_GT;
	v->a[23038] = anon_sym_LT_AMP;
	v->a[23039] = anon_sym_GT_AMP;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = anon_sym_GT_PIPE;
	v->a[23041] = anon_sym_LT_GT;
	v->a[23042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23043] = anon_sym_DOLLAR;
	v->a[23044] = anon_sym_DQUOTE;
	v->a[23045] = sym_raw_string;
	v->a[23046] = sym_number;
	v->a[23047] = anon_sym_DOLLAR_LBRACE;
	v->a[23048] = anon_sym_DOLLAR_LPAREN;
	v->a[23049] = anon_sym_BQUOTE;
	v->a[23050] = sym_word;
	v->a[23051] = 3;
	v->a[23052] = actions(501);
	v->a[23053] = 1;
	v->a[23054] = sym_comment;
	v->a[23055] = actions(725);
	v->a[23056] = 13;
	v->a[23057] = anon_sym_PIPE;
	v->a[23058] = anon_sym_EQ;
	v->a[23059] = anon_sym_LT;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = anon_sym_GT;
	v->a[23061] = anon_sym_GT_GT;
	v->a[23062] = anon_sym_LT_LT;
	v->a[23063] = anon_sym_CARET;
	v->a[23064] = anon_sym_AMP;
	v->a[23065] = anon_sym_PLUS;
	v->a[23066] = anon_sym_DASH;
	v->a[23067] = anon_sym_STAR;
	v->a[23068] = anon_sym_SLASH;
	v->a[23069] = anon_sym_PERCENT;
	v->a[23070] = actions(727);
	v->a[23071] = 20;
	v->a[23072] = anon_sym_RPAREN;
	v->a[23073] = anon_sym_AMP_AMP;
	v->a[23074] = anon_sym_PIPE_PIPE;
	v->a[23075] = anon_sym_PLUS_EQ;
	v->a[23076] = anon_sym_DASH_EQ;
	v->a[23077] = anon_sym_STAR_EQ;
	v->a[23078] = anon_sym_SLASH_EQ;
	v->a[23079] = anon_sym_PERCENT_EQ;
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = anon_sym_LT_LT_EQ;
	v->a[23081] = anon_sym_GT_GT_EQ;
	v->a[23082] = anon_sym_AMP_EQ;
	v->a[23083] = anon_sym_CARET_EQ;
	v->a[23084] = anon_sym_PIPE_EQ;
	v->a[23085] = anon_sym_EQ_EQ;
	v->a[23086] = anon_sym_BANG_EQ;
	v->a[23087] = anon_sym_LT_EQ;
	v->a[23088] = anon_sym_GT_EQ;
	v->a[23089] = anon_sym_QMARK;
	v->a[23090] = anon_sym_PLUS_PLUS2;
	v->a[23091] = anon_sym_DASH_DASH2;
	v->a[23092] = 16;
	v->a[23093] = actions(3);
	v->a[23094] = 1;
	v->a[23095] = sym_comment;
	v->a[23096] = actions(17);
	v->a[23097] = 1;
	v->a[23098] = anon_sym_LPAREN;
	v->a[23099] = actions(405);
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */

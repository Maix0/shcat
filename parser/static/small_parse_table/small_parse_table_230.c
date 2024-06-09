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
	v->a[23000] = anon_sym_SEMI;
	v->a[23001] = 16;
	v->a[23002] = actions(3);
	v->a[23003] = 1;
	v->a[23004] = sym_comment;
	v->a[23005] = actions(527);
	v->a[23006] = 1;
	v->a[23007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23008] = actions(529);
	v->a[23009] = 1;
	v->a[23010] = anon_sym_DOLLAR;
	v->a[23011] = actions(531);
	v->a[23012] = 1;
	v->a[23013] = anon_sym_DQUOTE;
	v->a[23014] = actions(533);
	v->a[23015] = 1;
	v->a[23016] = aux_sym_number_token1;
	v->a[23017] = actions(535);
	v->a[23018] = 1;
	v->a[23019] = aux_sym_number_token2;
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = actions(537);
	v->a[23021] = 1;
	v->a[23022] = anon_sym_DOLLAR_LBRACE;
	v->a[23023] = actions(539);
	v->a[23024] = 1;
	v->a[23025] = anon_sym_DOLLAR_LPAREN;
	v->a[23026] = actions(541);
	v->a[23027] = 1;
	v->a[23028] = anon_sym_BQUOTE;
	v->a[23029] = actions(543);
	v->a[23030] = 1;
	v->a[23031] = sym__bare_dollar;
	v->a[23032] = state(202);
	v->a[23033] = 1;
	v->a[23034] = aux_sym_command_repeat2;
	v->a[23035] = state(739);
	v->a[23036] = 1;
	v->a[23037] = sym_concatenation;
	v->a[23038] = actions(525);
	v->a[23039] = 2;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = sym_raw_string;
	v->a[23041] = sym_word;
	v->a[23042] = actions(563);
	v->a[23043] = 2;
	v->a[23044] = sym_file_descriptor;
	v->a[23045] = ts_builtin_sym_end;
	v->a[23046] = state(343);
	v->a[23047] = 6;
	v->a[23048] = sym_arithmetic_expansion;
	v->a[23049] = sym_string;
	v->a[23050] = sym_number;
	v->a[23051] = sym_simple_expansion;
	v->a[23052] = sym_expansion;
	v->a[23053] = sym_command_substitution;
	v->a[23054] = actions(561);
	v->a[23055] = 19;
	v->a[23056] = anon_sym_PIPE;
	v->a[23057] = anon_sym_SEMI_SEMI;
	v->a[23058] = anon_sym_AMP_AMP;
	v->a[23059] = anon_sym_PIPE_PIPE;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = anon_sym_LT;
	v->a[23061] = anon_sym_GT;
	v->a[23062] = anon_sym_GT_GT;
	v->a[23063] = anon_sym_AMP_GT;
	v->a[23064] = anon_sym_AMP_GT_GT;
	v->a[23065] = anon_sym_LT_AMP;
	v->a[23066] = anon_sym_GT_AMP;
	v->a[23067] = anon_sym_GT_PIPE;
	v->a[23068] = anon_sym_LT_AMP_DASH;
	v->a[23069] = anon_sym_GT_AMP_DASH;
	v->a[23070] = anon_sym_LT_LT;
	v->a[23071] = anon_sym_LT_LT_DASH;
	v->a[23072] = aux_sym_heredoc_redirect_token1;
	v->a[23073] = anon_sym_AMP;
	v->a[23074] = anon_sym_SEMI;
	v->a[23075] = 16;
	v->a[23076] = actions(3);
	v->a[23077] = 1;
	v->a[23078] = sym_comment;
	v->a[23079] = actions(574);
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = 1;
	v->a[23081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23082] = actions(577);
	v->a[23083] = 1;
	v->a[23084] = anon_sym_DOLLAR;
	v->a[23085] = actions(580);
	v->a[23086] = 1;
	v->a[23087] = anon_sym_DQUOTE;
	v->a[23088] = actions(583);
	v->a[23089] = 1;
	v->a[23090] = aux_sym_number_token1;
	v->a[23091] = actions(586);
	v->a[23092] = 1;
	v->a[23093] = aux_sym_number_token2;
	v->a[23094] = actions(589);
	v->a[23095] = 1;
	v->a[23096] = anon_sym_DOLLAR_LBRACE;
	v->a[23097] = actions(592);
	v->a[23098] = 1;
	v->a[23099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */

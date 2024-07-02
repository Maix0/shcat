/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_322.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1610(t_small_parse_table_array *v)
{
	v->a[32200] = anon_sym_SEMI;
	v->a[32201] = 5;
	v->a[32202] = actions(3);
	v->a[32203] = 1;
	v->a[32204] = sym_comment;
	v->a[32205] = actions(515);
	v->a[32206] = 2;
	v->a[32207] = sym_file_descriptor;
	v->a[32208] = sym_variable_name;
	v->a[32209] = state(426);
	v->a[32210] = 2;
	v->a[32211] = sym_concatenation;
	v->a[32212] = aux_sym_for_statement_repeat1;
	v->a[32213] = state(714);
	v->a[32214] = 5;
	v->a[32215] = sym_arithmetic_expansion;
	v->a[32216] = sym_string;
	v->a[32217] = sym_simple_expansion;
	v->a[32218] = sym_expansion;
	v->a[32219] = sym_command_substitution;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = actions(513);
	v->a[32221] = 22;
	v->a[32222] = anon_sym_PIPE;
	v->a[32223] = anon_sym_AMP_AMP;
	v->a[32224] = anon_sym_PIPE_PIPE;
	v->a[32225] = anon_sym_LT;
	v->a[32226] = anon_sym_GT;
	v->a[32227] = anon_sym_GT_GT;
	v->a[32228] = anon_sym_LT_AMP;
	v->a[32229] = anon_sym_GT_AMP;
	v->a[32230] = anon_sym_GT_PIPE;
	v->a[32231] = anon_sym_LT_GT;
	v->a[32232] = anon_sym_LT_LT;
	v->a[32233] = anon_sym_LT_LT_DASH;
	v->a[32234] = aux_sym_heredoc_redirect_token1;
	v->a[32235] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32236] = anon_sym_DOLLAR;
	v->a[32237] = anon_sym_DQUOTE;
	v->a[32238] = sym_raw_string;
	v->a[32239] = sym_number;
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = anon_sym_DOLLAR_LBRACE;
	v->a[32241] = anon_sym_DOLLAR_LPAREN;
	v->a[32242] = anon_sym_BQUOTE;
	v->a[32243] = sym_word;
	v->a[32244] = 20;
	v->a[32245] = actions(3);
	v->a[32246] = 1;
	v->a[32247] = sym_comment;
	v->a[32248] = actions(93);
	v->a[32249] = 1;
	v->a[32250] = anon_sym_LPAREN;
	v->a[32251] = actions(103);
	v->a[32252] = 1;
	v->a[32253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32254] = actions(105);
	v->a[32255] = 1;
	v->a[32256] = anon_sym_DOLLAR;
	v->a[32257] = actions(107);
	v->a[32258] = 1;
	v->a[32259] = anon_sym_DQUOTE;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = actions(111);
	v->a[32261] = 1;
	v->a[32262] = anon_sym_DOLLAR_LBRACE;
	v->a[32263] = actions(113);
	v->a[32264] = 1;
	v->a[32265] = anon_sym_DOLLAR_LPAREN;
	v->a[32266] = actions(115);
	v->a[32267] = 1;
	v->a[32268] = anon_sym_BQUOTE;
	v->a[32269] = actions(119);
	v->a[32270] = 1;
	v->a[32271] = sym_variable_name;
	v->a[32272] = actions(1164);
	v->a[32273] = 1;
	v->a[32274] = sym_file_descriptor;
	v->a[32275] = state(172);
	v->a[32276] = 1;
	v->a[32277] = sym_command_name;
	v->a[32278] = state(567);
	v->a[32279] = 1;
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = sym_concatenation;
	v->a[32281] = state(633);
	v->a[32282] = 1;
	v->a[32283] = sym_variable_assignment;
	v->a[32284] = state(670);
	v->a[32285] = 1;
	v->a[32286] = aux_sym_command_repeat1;
	v->a[32287] = state(1215);
	v->a[32288] = 1;
	v->a[32289] = sym_command;
	v->a[32290] = state(1217);
	v->a[32291] = 1;
	v->a[32292] = sym_subshell;
	v->a[32293] = state(1218);
	v->a[32294] = 1;
	v->a[32295] = sym_file_redirect;
	v->a[32296] = actions(109);
	v->a[32297] = 3;
	v->a[32298] = sym_raw_string;
	v->a[32299] = sym_number;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_362.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1810(t_small_parse_table_array *v)
{
	v->a[36200] = anon_sym_LT_AMP;
	v->a[36201] = anon_sym_GT_AMP;
	v->a[36202] = anon_sym_GT_PIPE;
	v->a[36203] = anon_sym_LT_GT;
	v->a[36204] = anon_sym_LT_LT;
	v->a[36205] = anon_sym_LT_LT_DASH;
	v->a[36206] = aux_sym_heredoc_redirect_token1;
	v->a[36207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36208] = anon_sym_AMP;
	v->a[36209] = aux_sym_concatenation_token1;
	v->a[36210] = anon_sym_DOLLAR;
	v->a[36211] = anon_sym_DQUOTE;
	v->a[36212] = sym_raw_string;
	v->a[36213] = sym_number;
	v->a[36214] = anon_sym_DOLLAR_LBRACE;
	v->a[36215] = anon_sym_DOLLAR_LPAREN;
	v->a[36216] = anon_sym_BQUOTE;
	v->a[36217] = sym_word;
	v->a[36218] = anon_sym_SEMI;
	v->a[36219] = 14;
	small_parse_table_1811(v);
}

void	small_parse_table_1811(t_small_parse_table_array *v)
{
	v->a[36220] = actions(3);
	v->a[36221] = 1;
	v->a[36222] = sym_comment;
	v->a[36223] = actions(560);
	v->a[36224] = 1;
	v->a[36225] = sym_file_descriptor;
	v->a[36226] = actions(1130);
	v->a[36227] = 1;
	v->a[36228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36229] = actions(1132);
	v->a[36230] = 1;
	v->a[36231] = anon_sym_DOLLAR;
	v->a[36232] = actions(1134);
	v->a[36233] = 1;
	v->a[36234] = anon_sym_DQUOTE;
	v->a[36235] = actions(1136);
	v->a[36236] = 1;
	v->a[36237] = anon_sym_DOLLAR_LBRACE;
	v->a[36238] = actions(1138);
	v->a[36239] = 1;
	small_parse_table_1812(v);
}

void	small_parse_table_1812(t_small_parse_table_array *v)
{
	v->a[36240] = anon_sym_DOLLAR_LPAREN;
	v->a[36241] = actions(1140);
	v->a[36242] = 1;
	v->a[36243] = anon_sym_BQUOTE;
	v->a[36244] = actions(1142);
	v->a[36245] = 1;
	v->a[36246] = sym__bare_dollar;
	v->a[36247] = state(556);
	v->a[36248] = 1;
	v->a[36249] = aux_sym_command_repeat2;
	v->a[36250] = state(912);
	v->a[36251] = 1;
	v->a[36252] = sym_concatenation;
	v->a[36253] = actions(1128);
	v->a[36254] = 3;
	v->a[36255] = sym_raw_string;
	v->a[36256] = sym_number;
	v->a[36257] = sym_word;
	v->a[36258] = state(779);
	v->a[36259] = 5;
	small_parse_table_1813(v);
}

void	small_parse_table_1813(t_small_parse_table_array *v)
{
	v->a[36260] = sym_arithmetic_expansion;
	v->a[36261] = sym_string;
	v->a[36262] = sym_simple_expansion;
	v->a[36263] = sym_expansion;
	v->a[36264] = sym_command_substitution;
	v->a[36265] = actions(562);
	v->a[36266] = 12;
	v->a[36267] = anon_sym_PIPE;
	v->a[36268] = anon_sym_AMP_AMP;
	v->a[36269] = anon_sym_PIPE_PIPE;
	v->a[36270] = anon_sym_LT;
	v->a[36271] = anon_sym_GT;
	v->a[36272] = anon_sym_GT_GT;
	v->a[36273] = anon_sym_LT_AMP;
	v->a[36274] = anon_sym_GT_AMP;
	v->a[36275] = anon_sym_GT_PIPE;
	v->a[36276] = anon_sym_LT_GT;
	v->a[36277] = anon_sym_LT_LT;
	v->a[36278] = anon_sym_LT_LT_DASH;
	v->a[36279] = 3;
	small_parse_table_1814(v);
}

void	small_parse_table_1814(t_small_parse_table_array *v)
{
	v->a[36280] = actions(3);
	v->a[36281] = 1;
	v->a[36282] = sym_comment;
	v->a[36283] = actions(1201);
	v->a[36284] = 3;
	v->a[36285] = sym_file_descriptor;
	v->a[36286] = sym__concat;
	v->a[36287] = sym__bare_dollar;
	v->a[36288] = actions(1199);
	v->a[36289] = 27;
	v->a[36290] = anon_sym_esac;
	v->a[36291] = anon_sym_PIPE;
	v->a[36292] = anon_sym_SEMI_SEMI;
	v->a[36293] = anon_sym_AMP_AMP;
	v->a[36294] = anon_sym_PIPE_PIPE;
	v->a[36295] = anon_sym_LT;
	v->a[36296] = anon_sym_GT;
	v->a[36297] = anon_sym_GT_GT;
	v->a[36298] = anon_sym_LT_AMP;
	v->a[36299] = anon_sym_GT_AMP;
	small_parse_table_1815(v);
}

/* EOF small_parse_table_362.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_192.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_960(t_small_parse_table_array *v)
{
	v->a[19200] = 32;
	v->a[19201] = actions(3);
	v->a[19202] = 1;
	v->a[19203] = sym_comment;
	v->a[19204] = actions(7);
	v->a[19205] = 1;
	v->a[19206] = sym_word;
	v->a[19207] = actions(9);
	v->a[19208] = 1;
	v->a[19209] = anon_sym_for;
	v->a[19210] = actions(13);
	v->a[19211] = 1;
	v->a[19212] = anon_sym_if;
	v->a[19213] = actions(15);
	v->a[19214] = 1;
	v->a[19215] = anon_sym_case;
	v->a[19216] = actions(17);
	v->a[19217] = 1;
	v->a[19218] = anon_sym_LPAREN;
	v->a[19219] = actions(19);
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = 1;
	v->a[19221] = anon_sym_LBRACE;
	v->a[19222] = actions(21);
	v->a[19223] = 1;
	v->a[19224] = anon_sym_BANG;
	v->a[19225] = actions(27);
	v->a[19226] = 1;
	v->a[19227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19228] = actions(29);
	v->a[19229] = 1;
	v->a[19230] = anon_sym_DOLLAR;
	v->a[19231] = actions(31);
	v->a[19232] = 1;
	v->a[19233] = anon_sym_DQUOTE;
	v->a[19234] = actions(33);
	v->a[19235] = 1;
	v->a[19236] = sym_raw_string;
	v->a[19237] = actions(35);
	v->a[19238] = 1;
	v->a[19239] = aux_sym_number_token1;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = actions(37);
	v->a[19241] = 1;
	v->a[19242] = aux_sym_number_token2;
	v->a[19243] = actions(39);
	v->a[19244] = 1;
	v->a[19245] = anon_sym_DOLLAR_LBRACE;
	v->a[19246] = actions(41);
	v->a[19247] = 1;
	v->a[19248] = anon_sym_DOLLAR_LPAREN;
	v->a[19249] = actions(43);
	v->a[19250] = 1;
	v->a[19251] = anon_sym_BQUOTE;
	v->a[19252] = actions(45);
	v->a[19253] = 1;
	v->a[19254] = sym_file_descriptor;
	v->a[19255] = actions(47);
	v->a[19256] = 1;
	v->a[19257] = sym_variable_name;
	v->a[19258] = state(182);
	v->a[19259] = 1;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = sym_command_name;
	v->a[19261] = state(268);
	v->a[19262] = 1;
	v->a[19263] = sym_variable_assignment;
	v->a[19264] = state(565);
	v->a[19265] = 1;
	v->a[19266] = sym_concatenation;
	v->a[19267] = state(572);
	v->a[19268] = 1;
	v->a[19269] = aux_sym_command_repeat1;
	v->a[19270] = state(698);
	v->a[19271] = 1;
	v->a[19272] = sym_file_redirect;
	v->a[19273] = state(1006);
	v->a[19274] = 1;
	v->a[19275] = sym_pipeline;
	v->a[19276] = state(1138);
	v->a[19277] = 1;
	v->a[19278] = aux_sym_redirected_statement_repeat2;
	v->a[19279] = state(2052);
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = 1;
	v->a[19281] = sym__statement_not_pipeline;
	v->a[19282] = actions(11);
	v->a[19283] = 2;
	v->a[19284] = anon_sym_while;
	v->a[19285] = anon_sym_until;
	v->a[19286] = actions(25);
	v->a[19287] = 2;
	v->a[19288] = anon_sym_LT_AMP_DASH;
	v->a[19289] = anon_sym_GT_AMP_DASH;
	v->a[19290] = state(311);
	v->a[19291] = 6;
	v->a[19292] = sym_arithmetic_expansion;
	v->a[19293] = sym_string;
	v->a[19294] = sym_number;
	v->a[19295] = sym_simple_expansion;
	v->a[19296] = sym_expansion;
	v->a[19297] = sym_command_substitution;
	v->a[19298] = actions(23);
	v->a[19299] = 8;
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */

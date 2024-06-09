/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_142.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_710(t_small_parse_table_array *v)
{
	v->a[14200] = actions(15);
	v->a[14201] = 1;
	v->a[14202] = anon_sym_case;
	v->a[14203] = actions(17);
	v->a[14204] = 1;
	v->a[14205] = anon_sym_LPAREN;
	v->a[14206] = actions(19);
	v->a[14207] = 1;
	v->a[14208] = anon_sym_LBRACE;
	v->a[14209] = actions(63);
	v->a[14210] = 1;
	v->a[14211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14212] = actions(65);
	v->a[14213] = 1;
	v->a[14214] = anon_sym_DOLLAR;
	v->a[14215] = actions(67);
	v->a[14216] = 1;
	v->a[14217] = anon_sym_DQUOTE;
	v->a[14218] = actions(69);
	v->a[14219] = 1;
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = sym_raw_string;
	v->a[14221] = actions(71);
	v->a[14222] = 1;
	v->a[14223] = aux_sym_number_token1;
	v->a[14224] = actions(73);
	v->a[14225] = 1;
	v->a[14226] = aux_sym_number_token2;
	v->a[14227] = actions(75);
	v->a[14228] = 1;
	v->a[14229] = anon_sym_DOLLAR_LBRACE;
	v->a[14230] = actions(77);
	v->a[14231] = 1;
	v->a[14232] = anon_sym_DOLLAR_LPAREN;
	v->a[14233] = actions(79);
	v->a[14234] = 1;
	v->a[14235] = anon_sym_BQUOTE;
	v->a[14236] = actions(81);
	v->a[14237] = 1;
	v->a[14238] = sym_file_descriptor;
	v->a[14239] = actions(83);
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = 1;
	v->a[14241] = sym_variable_name;
	v->a[14242] = actions(238);
	v->a[14243] = 1;
	v->a[14244] = sym_word;
	v->a[14245] = actions(240);
	v->a[14246] = 1;
	v->a[14247] = anon_sym_BANG;
	v->a[14248] = state(132);
	v->a[14249] = 1;
	v->a[14250] = aux_sym__statements_repeat1;
	v->a[14251] = state(185);
	v->a[14252] = 1;
	v->a[14253] = sym_command_name;
	v->a[14254] = state(297);
	v->a[14255] = 1;
	v->a[14256] = sym_variable_assignment;
	v->a[14257] = state(582);
	v->a[14258] = 1;
	v->a[14259] = sym_concatenation;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = state(614);
	v->a[14261] = 1;
	v->a[14262] = aux_sym_command_repeat1;
	v->a[14263] = state(769);
	v->a[14264] = 1;
	v->a[14265] = sym_file_redirect;
	v->a[14266] = state(1133);
	v->a[14267] = 1;
	v->a[14268] = aux_sym_redirected_statement_repeat2;
	v->a[14269] = state(1142);
	v->a[14270] = 1;
	v->a[14271] = sym_pipeline;
	v->a[14272] = state(2041);
	v->a[14273] = 1;
	v->a[14274] = sym__statement_not_pipeline;
	v->a[14275] = state(2110);
	v->a[14276] = 1;
	v->a[14277] = sym__statements;
	v->a[14278] = actions(11);
	v->a[14279] = 2;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = anon_sym_while;
	v->a[14281] = anon_sym_until;
	v->a[14282] = actions(61);
	v->a[14283] = 2;
	v->a[14284] = anon_sym_LT_AMP_DASH;
	v->a[14285] = anon_sym_GT_AMP_DASH;
	v->a[14286] = state(397);
	v->a[14287] = 6;
	v->a[14288] = sym_arithmetic_expansion;
	v->a[14289] = sym_string;
	v->a[14290] = sym_number;
	v->a[14291] = sym_simple_expansion;
	v->a[14292] = sym_expansion;
	v->a[14293] = sym_command_substitution;
	v->a[14294] = actions(59);
	v->a[14295] = 8;
	v->a[14296] = anon_sym_LT;
	v->a[14297] = anon_sym_GT;
	v->a[14298] = anon_sym_GT_GT;
	v->a[14299] = anon_sym_AMP_GT;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */

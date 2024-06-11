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
	v->a[14200] = aux_sym__terminated_statement;
	v->a[14201] = state(187);
	v->a[14202] = 1;
	v->a[14203] = sym_command_name;
	v->a[14204] = state(274);
	v->a[14205] = 1;
	v->a[14206] = sym_variable_assignment;
	v->a[14207] = state(647);
	v->a[14208] = 1;
	v->a[14209] = sym_concatenation;
	v->a[14210] = state(736);
	v->a[14211] = 1;
	v->a[14212] = aux_sym_command_repeat1;
	v->a[14213] = state(738);
	v->a[14214] = 1;
	v->a[14215] = sym_file_redirect;
	v->a[14216] = state(1439);
	v->a[14217] = 1;
	v->a[14218] = sym_pipeline;
	v->a[14219] = state(1460);
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = 1;
	v->a[14221] = aux_sym_redirected_statement_repeat2;
	v->a[14222] = state(2269);
	v->a[14223] = 1;
	v->a[14224] = sym__statement_not_pipeline;
	v->a[14225] = actions(11);
	v->a[14226] = 2;
	v->a[14227] = anon_sym_while;
	v->a[14228] = anon_sym_until;
	v->a[14229] = actions(57);
	v->a[14230] = 2;
	v->a[14231] = anon_sym_LT_AMP_DASH;
	v->a[14232] = anon_sym_GT_AMP_DASH;
	v->a[14233] = actions(65);
	v->a[14234] = 2;
	v->a[14235] = sym_raw_string;
	v->a[14236] = sym_number;
	v->a[14237] = state(394);
	v->a[14238] = 5;
	v->a[14239] = sym_arithmetic_expansion;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = sym_string;
	v->a[14241] = sym_simple_expansion;
	v->a[14242] = sym_expansion;
	v->a[14243] = sym_command_substitution;
	v->a[14244] = actions(55);
	v->a[14245] = 8;
	v->a[14246] = anon_sym_LT;
	v->a[14247] = anon_sym_GT;
	v->a[14248] = anon_sym_GT_GT;
	v->a[14249] = anon_sym_AMP_GT;
	v->a[14250] = anon_sym_AMP_GT_GT;
	v->a[14251] = anon_sym_LT_AMP;
	v->a[14252] = anon_sym_GT_AMP;
	v->a[14253] = anon_sym_GT_PIPE;
	v->a[14254] = state(1312);
	v->a[14255] = 12;
	v->a[14256] = sym_redirected_statement;
	v->a[14257] = sym_for_statement;
	v->a[14258] = sym_while_statement;
	v->a[14259] = sym_if_statement;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = sym_case_statement;
	v->a[14261] = sym_function_definition;
	v->a[14262] = sym_compound_statement;
	v->a[14263] = sym_subshell;
	v->a[14264] = sym_list;
	v->a[14265] = sym_negated_command;
	v->a[14266] = sym_command;
	v->a[14267] = sym_variable_assignments;
	v->a[14268] = 32;
	v->a[14269] = actions(3);
	v->a[14270] = 1;
	v->a[14271] = sym_comment;
	v->a[14272] = actions(143);
	v->a[14273] = 1;
	v->a[14274] = sym_word;
	v->a[14275] = actions(146);
	v->a[14276] = 1;
	v->a[14277] = anon_sym_for;
	v->a[14278] = actions(152);
	v->a[14279] = 1;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = anon_sym_if;
	v->a[14281] = actions(155);
	v->a[14282] = 1;
	v->a[14283] = anon_sym_do;
	v->a[14284] = actions(157);
	v->a[14285] = 1;
	v->a[14286] = anon_sym_case;
	v->a[14287] = actions(160);
	v->a[14288] = 1;
	v->a[14289] = anon_sym_LPAREN;
	v->a[14290] = actions(163);
	v->a[14291] = 1;
	v->a[14292] = anon_sym_LBRACE;
	v->a[14293] = actions(166);
	v->a[14294] = 1;
	v->a[14295] = anon_sym_BANG;
	v->a[14296] = actions(175);
	v->a[14297] = 1;
	v->a[14298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14299] = actions(178);
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */

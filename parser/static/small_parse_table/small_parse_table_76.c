/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_76.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_380(t_small_parse_table_array *v)
{
	v->a[7600] = sym_variable_assignment;
	v->a[7601] = state(582);
	v->a[7602] = 1;
	v->a[7603] = sym_concatenation;
	v->a[7604] = state(614);
	v->a[7605] = 1;
	v->a[7606] = aux_sym_command_repeat1;
	v->a[7607] = state(769);
	v->a[7608] = 1;
	v->a[7609] = sym_file_redirect;
	v->a[7610] = state(1133);
	v->a[7611] = 1;
	v->a[7612] = aux_sym_redirected_statement_repeat2;
	v->a[7613] = state(1142);
	v->a[7614] = 1;
	v->a[7615] = sym_pipeline;
	v->a[7616] = state(2041);
	v->a[7617] = 1;
	v->a[7618] = sym__statement_not_pipeline;
	v->a[7619] = state(2205);
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = 1;
	v->a[7621] = sym__statements;
	v->a[7622] = actions(11);
	v->a[7623] = 2;
	v->a[7624] = anon_sym_while;
	v->a[7625] = anon_sym_until;
	v->a[7626] = actions(61);
	v->a[7627] = 2;
	v->a[7628] = anon_sym_LT_AMP_DASH;
	v->a[7629] = anon_sym_GT_AMP_DASH;
	v->a[7630] = state(397);
	v->a[7631] = 6;
	v->a[7632] = sym_arithmetic_expansion;
	v->a[7633] = sym_string;
	v->a[7634] = sym_number;
	v->a[7635] = sym_simple_expansion;
	v->a[7636] = sym_expansion;
	v->a[7637] = sym_command_substitution;
	v->a[7638] = actions(59);
	v->a[7639] = 8;
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = anon_sym_LT;
	v->a[7641] = anon_sym_GT;
	v->a[7642] = anon_sym_GT_GT;
	v->a[7643] = anon_sym_AMP_GT;
	v->a[7644] = anon_sym_AMP_GT_GT;
	v->a[7645] = anon_sym_LT_AMP;
	v->a[7646] = anon_sym_GT_AMP;
	v->a[7647] = anon_sym_GT_PIPE;
	v->a[7648] = state(1071);
	v->a[7649] = 12;
	v->a[7650] = sym_redirected_statement;
	v->a[7651] = sym_for_statement;
	v->a[7652] = sym_while_statement;
	v->a[7653] = sym_if_statement;
	v->a[7654] = sym_case_statement;
	v->a[7655] = sym_function_definition;
	v->a[7656] = sym_compound_statement;
	v->a[7657] = sym_subshell;
	v->a[7658] = sym_list;
	v->a[7659] = sym_negated_command;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = sym_command;
	v->a[7661] = sym_variable_assignments;
	v->a[7662] = 34;
	v->a[7663] = actions(3);
	v->a[7664] = 1;
	v->a[7665] = sym_comment;
	v->a[7666] = actions(9);
	v->a[7667] = 1;
	v->a[7668] = anon_sym_for;
	v->a[7669] = actions(13);
	v->a[7670] = 1;
	v->a[7671] = anon_sym_if;
	v->a[7672] = actions(15);
	v->a[7673] = 1;
	v->a[7674] = anon_sym_case;
	v->a[7675] = actions(17);
	v->a[7676] = 1;
	v->a[7677] = anon_sym_LPAREN;
	v->a[7678] = actions(19);
	v->a[7679] = 1;
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = anon_sym_LBRACE;
	v->a[7681] = actions(63);
	v->a[7682] = 1;
	v->a[7683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7684] = actions(65);
	v->a[7685] = 1;
	v->a[7686] = anon_sym_DOLLAR;
	v->a[7687] = actions(67);
	v->a[7688] = 1;
	v->a[7689] = anon_sym_DQUOTE;
	v->a[7690] = actions(69);
	v->a[7691] = 1;
	v->a[7692] = sym_raw_string;
	v->a[7693] = actions(71);
	v->a[7694] = 1;
	v->a[7695] = aux_sym_number_token1;
	v->a[7696] = actions(73);
	v->a[7697] = 1;
	v->a[7698] = aux_sym_number_token2;
	v->a[7699] = actions(75);
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */

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
	v->a[7600] = sym_pipeline;
	v->a[7601] = state(1001);
	v->a[7602] = 1;
	v->a[7603] = aux_sym_redirected_statement_repeat2;
	v->a[7604] = state(1606);
	v->a[7605] = 1;
	v->a[7606] = sym__statement_not_pipeline;
	v->a[7607] = state(1683);
	v->a[7608] = 1;
	v->a[7609] = sym__statements;
	v->a[7610] = actions(11);
	v->a[7611] = 2;
	v->a[7612] = anon_sym_while;
	v->a[7613] = anon_sym_until;
	v->a[7614] = actions(212);
	v->a[7615] = 2;
	v->a[7616] = sym_raw_string;
	v->a[7617] = sym_number;
	v->a[7618] = state(327);
	v->a[7619] = 5;
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = sym_arithmetic_expansion;
	v->a[7621] = sym_string;
	v->a[7622] = sym_simple_expansion;
	v->a[7623] = sym_expansion;
	v->a[7624] = sym_command_substitution;
	v->a[7625] = actions(210);
	v->a[7626] = 7;
	v->a[7627] = anon_sym_LT;
	v->a[7628] = anon_sym_GT;
	v->a[7629] = anon_sym_GT_GT;
	v->a[7630] = anon_sym_LT_AMP;
	v->a[7631] = anon_sym_GT_AMP;
	v->a[7632] = anon_sym_GT_PIPE;
	v->a[7633] = anon_sym_LT_GT;
	v->a[7634] = state(884);
	v->a[7635] = 12;
	v->a[7636] = sym_redirected_statement;
	v->a[7637] = sym_for_statement;
	v->a[7638] = sym_while_statement;
	v->a[7639] = sym_if_statement;
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = sym_case_statement;
	v->a[7641] = sym_function_definition;
	v->a[7642] = sym_compound_statement;
	v->a[7643] = sym_subshell;
	v->a[7644] = sym_list;
	v->a[7645] = sym_negated_command;
	v->a[7646] = sym_command;
	v->a[7647] = sym__variable_assignments;
	v->a[7648] = 30;
	v->a[7649] = actions(3);
	v->a[7650] = 1;
	v->a[7651] = sym_comment;
	v->a[7652] = actions(9);
	v->a[7653] = 1;
	v->a[7654] = anon_sym_for;
	v->a[7655] = actions(13);
	v->a[7656] = 1;
	v->a[7657] = anon_sym_if;
	v->a[7658] = actions(15);
	v->a[7659] = 1;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = anon_sym_case;
	v->a[7661] = actions(17);
	v->a[7662] = 1;
	v->a[7663] = anon_sym_LPAREN;
	v->a[7664] = actions(19);
	v->a[7665] = 1;
	v->a[7666] = anon_sym_LBRACE;
	v->a[7667] = actions(53);
	v->a[7668] = 1;
	v->a[7669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7670] = actions(55);
	v->a[7671] = 1;
	v->a[7672] = anon_sym_DOLLAR;
	v->a[7673] = actions(57);
	v->a[7674] = 1;
	v->a[7675] = anon_sym_DQUOTE;
	v->a[7676] = actions(61);
	v->a[7677] = 1;
	v->a[7678] = anon_sym_DOLLAR_LBRACE;
	v->a[7679] = actions(63);
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = 1;
	v->a[7681] = anon_sym_DOLLAR_LPAREN;
	v->a[7682] = actions(65);
	v->a[7683] = 1;
	v->a[7684] = anon_sym_BQUOTE;
	v->a[7685] = actions(67);
	v->a[7686] = 1;
	v->a[7687] = sym_variable_name;
	v->a[7688] = actions(202);
	v->a[7689] = 1;
	v->a[7690] = sym_word;
	v->a[7691] = actions(204);
	v->a[7692] = 1;
	v->a[7693] = anon_sym_BANG;
	v->a[7694] = state(119);
	v->a[7695] = 1;
	v->a[7696] = aux_sym__statements_repeat1;
	v->a[7697] = state(272);
	v->a[7698] = 1;
	v->a[7699] = sym_command_name;
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */

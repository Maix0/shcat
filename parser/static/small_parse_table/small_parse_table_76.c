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
	v->a[7600] = anon_sym_PIPE_PIPE;
	v->a[7601] = anon_sym_LT;
	v->a[7602] = anon_sym_GT;
	v->a[7603] = anon_sym_GT_GT;
	v->a[7604] = anon_sym_AMP_GT;
	v->a[7605] = anon_sym_AMP_GT_GT;
	v->a[7606] = anon_sym_LT_AMP;
	v->a[7607] = anon_sym_GT_AMP;
	v->a[7608] = anon_sym_GT_PIPE;
	v->a[7609] = anon_sym_LT_AMP_DASH;
	v->a[7610] = anon_sym_GT_AMP_DASH;
	v->a[7611] = anon_sym_LT_LT;
	v->a[7612] = anon_sym_LT_LT_DASH;
	v->a[7613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7614] = anon_sym_AMP;
	v->a[7615] = anon_sym_DOLLAR;
	v->a[7616] = sym__special_character;
	v->a[7617] = anon_sym_DQUOTE;
	v->a[7618] = sym_raw_string;
	v->a[7619] = aux_sym_number_token1;
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = aux_sym_number_token2;
	v->a[7621] = anon_sym_DOLLAR_LBRACE;
	v->a[7622] = anon_sym_DOLLAR_LPAREN;
	v->a[7623] = anon_sym_BQUOTE;
	v->a[7624] = anon_sym_DOLLAR_BQUOTE;
	v->a[7625] = sym_word;
	v->a[7626] = anon_sym_SEMI;
	v->a[7627] = 6;
	v->a[7628] = actions(3);
	v->a[7629] = 1;
	v->a[7630] = sym_comment;
	v->a[7631] = state(1082);
	v->a[7632] = 1;
	v->a[7633] = aux_sym__literal_repeat1;
	v->a[7634] = state(1211);
	v->a[7635] = 1;
	v->a[7636] = sym_concatenation;
	v->a[7637] = actions(1534);
	v->a[7638] = 5;
	v->a[7639] = sym_file_descriptor;
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = sym_variable_name;
	v->a[7641] = sym_test_operator;
	v->a[7642] = sym__brace_start;
	v->a[7643] = aux_sym_heredoc_redirect_token1;
	v->a[7644] = state(688);
	v->a[7645] = 7;
	v->a[7646] = sym_arithmetic_expansion;
	v->a[7647] = sym_brace_expression;
	v->a[7648] = sym_string;
	v->a[7649] = sym_number;
	v->a[7650] = sym_simple_expansion;
	v->a[7651] = sym_expansion;
	v->a[7652] = sym_command_substitution;
	v->a[7653] = actions(1532);
	v->a[7654] = 33;
	v->a[7655] = anon_sym_PIPE;
	v->a[7656] = anon_sym_SEMI_SEMI;
	v->a[7657] = anon_sym_SEMI_AMP;
	v->a[7658] = anon_sym_SEMI_SEMI_AMP;
	v->a[7659] = anon_sym_PIPE_AMP;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = anon_sym_AMP_AMP;
	v->a[7661] = anon_sym_PIPE_PIPE;
	v->a[7662] = anon_sym_LT;
	v->a[7663] = anon_sym_GT;
	v->a[7664] = anon_sym_GT_GT;
	v->a[7665] = anon_sym_AMP_GT;
	v->a[7666] = anon_sym_AMP_GT_GT;
	v->a[7667] = anon_sym_LT_AMP;
	v->a[7668] = anon_sym_GT_AMP;
	v->a[7669] = anon_sym_GT_PIPE;
	v->a[7670] = anon_sym_LT_AMP_DASH;
	v->a[7671] = anon_sym_GT_AMP_DASH;
	v->a[7672] = anon_sym_LT_LT;
	v->a[7673] = anon_sym_LT_LT_DASH;
	v->a[7674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7675] = anon_sym_AMP;
	v->a[7676] = anon_sym_DOLLAR;
	v->a[7677] = sym__special_character;
	v->a[7678] = anon_sym_DQUOTE;
	v->a[7679] = sym_raw_string;
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = aux_sym_number_token1;
	v->a[7681] = aux_sym_number_token2;
	v->a[7682] = anon_sym_DOLLAR_LBRACE;
	v->a[7683] = anon_sym_DOLLAR_LPAREN;
	v->a[7684] = anon_sym_BQUOTE;
	v->a[7685] = anon_sym_DOLLAR_BQUOTE;
	v->a[7686] = sym_word;
	v->a[7687] = anon_sym_SEMI;
	v->a[7688] = 21;
	v->a[7689] = actions(3);
	v->a[7690] = 1;
	v->a[7691] = sym_comment;
	v->a[7692] = actions(1148);
	v->a[7693] = 1;
	v->a[7694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7695] = actions(1150);
	v->a[7696] = 1;
	v->a[7697] = anon_sym_DOLLAR;
	v->a[7698] = actions(1152);
	v->a[7699] = 1;
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */

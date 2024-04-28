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
	v->a[7600] = anon_sym_LT_LT;
	v->a[7601] = anon_sym_GT_GT;
	v->a[7602] = anon_sym_esac;
	v->a[7603] = anon_sym_SEMI_SEMI;
	v->a[7604] = anon_sym_SEMI_AMP;
	v->a[7605] = anon_sym_SEMI_SEMI_AMP;
	v->a[7606] = anon_sym_PIPE_AMP;
	v->a[7607] = anon_sym_AMP_GT;
	v->a[7608] = anon_sym_AMP_GT_GT;
	v->a[7609] = anon_sym_LT_AMP;
	v->a[7610] = anon_sym_GT_AMP;
	v->a[7611] = anon_sym_GT_PIPE;
	v->a[7612] = anon_sym_LT_AMP_DASH;
	v->a[7613] = anon_sym_GT_AMP_DASH;
	v->a[7614] = anon_sym_LT_LT_DASH;
	v->a[7615] = anon_sym_LT_LT_LT;
	v->a[7616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7617] = anon_sym_DOLLAR_LBRACK;
	v->a[7618] = anon_sym_DOLLAR;
	v->a[7619] = sym__special_character;
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = anon_sym_DQUOTE;
	v->a[7621] = sym_raw_string;
	v->a[7622] = sym_ansi_c_string;
	v->a[7623] = aux_sym_number_token1;
	v->a[7624] = aux_sym_number_token2;
	v->a[7625] = anon_sym_DOLLAR_LBRACE;
	v->a[7626] = anon_sym_DOLLAR_LPAREN;
	v->a[7627] = anon_sym_BQUOTE;
	v->a[7628] = anon_sym_DOLLAR_BQUOTE;
	v->a[7629] = anon_sym_LT_LPAREN;
	v->a[7630] = anon_sym_GT_LPAREN;
	v->a[7631] = sym_word;
	v->a[7632] = 8;
	v->a[7633] = actions(3);
	v->a[7634] = 1;
	v->a[7635] = sym_comment;
	v->a[7636] = actions(2339);
	v->a[7637] = 1;
	v->a[7638] = anon_sym_DQUOTE;
	v->a[7639] = actions(2492);
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = 1;
	v->a[7641] = sym_variable_name;
	v->a[7642] = state(1463);
	v->a[7643] = 1;
	v->a[7644] = sym_string;
	v->a[7645] = actions(2490);
	v->a[7646] = 2;
	v->a[7647] = aux_sym__simple_variable_name_token1;
	v->a[7648] = aux_sym__multiline_variable_name_token1;
	v->a[7649] = actions(1235);
	v->a[7650] = 3;
	v->a[7651] = sym_file_descriptor;
	v->a[7652] = sym_test_operator;
	v->a[7653] = sym__brace_start;
	v->a[7654] = actions(2488);
	v->a[7655] = 9;
	v->a[7656] = anon_sym_DASH;
	v->a[7657] = anon_sym_STAR;
	v->a[7658] = anon_sym_BANG;
	v->a[7659] = anon_sym_QMARK;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = anon_sym_DOLLAR;
	v->a[7661] = anon_sym_POUND;
	v->a[7662] = anon_sym_AT2;
	v->a[7663] = anon_sym_0;
	v->a[7664] = anon_sym__;
	v->a[7665] = actions(1227);
	v->a[7666] = 39;
	v->a[7667] = anon_sym_LPAREN_LPAREN;
	v->a[7668] = anon_sym_SEMI;
	v->a[7669] = anon_sym_PIPE_PIPE;
	v->a[7670] = anon_sym_AMP_AMP;
	v->a[7671] = anon_sym_PIPE;
	v->a[7672] = anon_sym_AMP;
	v->a[7673] = anon_sym_LT;
	v->a[7674] = anon_sym_GT;
	v->a[7675] = anon_sym_LT_LT;
	v->a[7676] = anon_sym_GT_GT;
	v->a[7677] = anon_sym_esac;
	v->a[7678] = anon_sym_SEMI_SEMI;
	v->a[7679] = anon_sym_SEMI_AMP;
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = anon_sym_SEMI_SEMI_AMP;
	v->a[7681] = anon_sym_PIPE_AMP;
	v->a[7682] = anon_sym_AMP_GT;
	v->a[7683] = anon_sym_AMP_GT_GT;
	v->a[7684] = anon_sym_LT_AMP;
	v->a[7685] = anon_sym_GT_AMP;
	v->a[7686] = anon_sym_GT_PIPE;
	v->a[7687] = anon_sym_LT_AMP_DASH;
	v->a[7688] = anon_sym_GT_AMP_DASH;
	v->a[7689] = anon_sym_LT_LT_DASH;
	v->a[7690] = aux_sym_heredoc_redirect_token1;
	v->a[7691] = anon_sym_LT_LT_LT;
	v->a[7692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7693] = anon_sym_DOLLAR_LBRACK;
	v->a[7694] = sym__special_character;
	v->a[7695] = sym_raw_string;
	v->a[7696] = sym_ansi_c_string;
	v->a[7697] = aux_sym_number_token1;
	v->a[7698] = aux_sym_number_token2;
	v->a[7699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */

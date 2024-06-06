/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1076.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5380(t_small_parse_table_array *v)
{
	v->a[107600] = sym_comment;
	v->a[107601] = actions(5545);
	v->a[107602] = 1;
	v->a[107603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107604] = actions(5547);
	v->a[107605] = 1;
	v->a[107606] = anon_sym_DOLLAR;
	v->a[107607] = actions(5549);
	v->a[107608] = 1;
	v->a[107609] = sym__special_character;
	v->a[107610] = actions(5551);
	v->a[107611] = 1;
	v->a[107612] = anon_sym_DQUOTE;
	v->a[107613] = actions(5555);
	v->a[107614] = 1;
	v->a[107615] = aux_sym_number_token1;
	v->a[107616] = actions(5557);
	v->a[107617] = 1;
	v->a[107618] = aux_sym_number_token2;
	v->a[107619] = actions(5559);
	small_parse_table_5381(v);
}

void	small_parse_table_5381(t_small_parse_table_array *v)
{
	v->a[107620] = 1;
	v->a[107621] = anon_sym_DOLLAR_LBRACE;
	v->a[107622] = actions(5561);
	v->a[107623] = 1;
	v->a[107624] = anon_sym_DOLLAR_LPAREN;
	v->a[107625] = actions(5563);
	v->a[107626] = 1;
	v->a[107627] = anon_sym_BQUOTE;
	v->a[107628] = actions(5565);
	v->a[107629] = 1;
	v->a[107630] = anon_sym_DOLLAR_BQUOTE;
	v->a[107631] = actions(5571);
	v->a[107632] = 1;
	v->a[107633] = sym__brace_start;
	v->a[107634] = actions(6233);
	v->a[107635] = 1;
	v->a[107636] = sym_word;
	v->a[107637] = state(980);
	v->a[107638] = 1;
	v->a[107639] = aux_sym__literal_repeat1;
	small_parse_table_5382(v);
}

void	small_parse_table_5382(t_small_parse_table_array *v)
{
	v->a[107640] = actions(6235);
	v->a[107641] = 2;
	v->a[107642] = sym_test_operator;
	v->a[107643] = sym_raw_string;
	v->a[107644] = state(337);
	v->a[107645] = 2;
	v->a[107646] = sym_concatenation;
	v->a[107647] = aux_sym_for_statement_repeat1;
	v->a[107648] = state(637);
	v->a[107649] = 7;
	v->a[107650] = sym_arithmetic_expansion;
	v->a[107651] = sym_brace_expression;
	v->a[107652] = sym_string;
	v->a[107653] = sym_number;
	v->a[107654] = sym_simple_expansion;
	v->a[107655] = sym_expansion;
	v->a[107656] = sym_command_substitution;
	v->a[107657] = 3;
	v->a[107658] = actions(3);
	v->a[107659] = 1;
	small_parse_table_5383(v);
}

void	small_parse_table_5383(t_small_parse_table_array *v)
{
	v->a[107660] = sym_comment;
	v->a[107661] = actions(6085);
	v->a[107662] = 2;
	v->a[107663] = sym_file_descriptor;
	v->a[107664] = aux_sym_heredoc_redirect_token1;
	v->a[107665] = actions(6087);
	v->a[107666] = 22;
	v->a[107667] = anon_sym_esac;
	v->a[107668] = anon_sym_PIPE;
	v->a[107669] = anon_sym_SEMI_SEMI;
	v->a[107670] = anon_sym_SEMI_AMP;
	v->a[107671] = anon_sym_SEMI_SEMI_AMP;
	v->a[107672] = anon_sym_PIPE_AMP;
	v->a[107673] = anon_sym_AMP_AMP;
	v->a[107674] = anon_sym_PIPE_PIPE;
	v->a[107675] = anon_sym_LT;
	v->a[107676] = anon_sym_GT;
	v->a[107677] = anon_sym_GT_GT;
	v->a[107678] = anon_sym_AMP_GT;
	v->a[107679] = anon_sym_AMP_GT_GT;
	small_parse_table_5384(v);
}

void	small_parse_table_5384(t_small_parse_table_array *v)
{
	v->a[107680] = anon_sym_LT_AMP;
	v->a[107681] = anon_sym_GT_AMP;
	v->a[107682] = anon_sym_GT_PIPE;
	v->a[107683] = anon_sym_LT_AMP_DASH;
	v->a[107684] = anon_sym_GT_AMP_DASH;
	v->a[107685] = anon_sym_LT_LT;
	v->a[107686] = anon_sym_LT_LT_DASH;
	v->a[107687] = anon_sym_AMP;
	v->a[107688] = anon_sym_SEMI;
	v->a[107689] = 3;
	v->a[107690] = actions(3);
	v->a[107691] = 1;
	v->a[107692] = sym_comment;
	v->a[107693] = actions(6239);
	v->a[107694] = 2;
	v->a[107695] = sym_file_descriptor;
	v->a[107696] = aux_sym_heredoc_redirect_token1;
	v->a[107697] = actions(6237);
	v->a[107698] = 22;
	v->a[107699] = anon_sym_esac;
	small_parse_table_5385(v);
}

/* EOF small_parse_table_1076.c */

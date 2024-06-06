/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_536.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2680(t_small_parse_table_array *v)
{
	v->a[53600] = anon_sym_DOLLAR;
	v->a[53601] = anon_sym_DQUOTE;
	v->a[53602] = sym_raw_string;
	v->a[53603] = aux_sym_number_token1;
	v->a[53604] = aux_sym_number_token2;
	v->a[53605] = anon_sym_DOLLAR_LBRACE;
	v->a[53606] = anon_sym_DOLLAR_LPAREN;
	v->a[53607] = anon_sym_BQUOTE;
	v->a[53608] = anon_sym_DOLLAR_BQUOTE;
	v->a[53609] = sym_word;
	v->a[53610] = anon_sym_SEMI;
	v->a[53611] = 19;
	v->a[53612] = actions(3);
	v->a[53613] = 1;
	v->a[53614] = sym_comment;
	v->a[53615] = actions(3756);
	v->a[53616] = 1;
	v->a[53617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53618] = actions(3759);
	v->a[53619] = 1;
	small_parse_table_2681(v);
}

void	small_parse_table_2681(t_small_parse_table_array *v)
{
	v->a[53620] = anon_sym_DOLLAR;
	v->a[53621] = actions(3762);
	v->a[53622] = 1;
	v->a[53623] = sym__special_character;
	v->a[53624] = actions(3765);
	v->a[53625] = 1;
	v->a[53626] = anon_sym_DQUOTE;
	v->a[53627] = actions(3768);
	v->a[53628] = 1;
	v->a[53629] = aux_sym_number_token1;
	v->a[53630] = actions(3771);
	v->a[53631] = 1;
	v->a[53632] = aux_sym_number_token2;
	v->a[53633] = actions(3774);
	v->a[53634] = 1;
	v->a[53635] = anon_sym_DOLLAR_LBRACE;
	v->a[53636] = actions(3777);
	v->a[53637] = 1;
	v->a[53638] = anon_sym_DOLLAR_LPAREN;
	v->a[53639] = actions(3780);
	small_parse_table_2682(v);
}

void	small_parse_table_2682(t_small_parse_table_array *v)
{
	v->a[53640] = 1;
	v->a[53641] = anon_sym_BQUOTE;
	v->a[53642] = actions(3783);
	v->a[53643] = 1;
	v->a[53644] = anon_sym_DOLLAR_BQUOTE;
	v->a[53645] = actions(3786);
	v->a[53646] = 1;
	v->a[53647] = sym_test_operator;
	v->a[53648] = actions(3789);
	v->a[53649] = 1;
	v->a[53650] = sym__brace_start;
	v->a[53651] = state(1824);
	v->a[53652] = 1;
	v->a[53653] = aux_sym__literal_repeat1;
	v->a[53654] = actions(1287);
	v->a[53655] = 2;
	v->a[53656] = sym_file_descriptor;
	v->a[53657] = aux_sym_heredoc_redirect_token1;
	v->a[53658] = actions(3753);
	v->a[53659] = 2;
	small_parse_table_2683(v);
}

void	small_parse_table_2683(t_small_parse_table_array *v)
{
	v->a[53660] = sym_raw_string;
	v->a[53661] = sym_word;
	v->a[53662] = state(1170);
	v->a[53663] = 2;
	v->a[53664] = sym_concatenation;
	v->a[53665] = aux_sym_for_statement_repeat1;
	v->a[53666] = state(1685);
	v->a[53667] = 7;
	v->a[53668] = sym_arithmetic_expansion;
	v->a[53669] = sym_brace_expression;
	v->a[53670] = sym_string;
	v->a[53671] = sym_number;
	v->a[53672] = sym_simple_expansion;
	v->a[53673] = sym_expansion;
	v->a[53674] = sym_command_substitution;
	v->a[53675] = actions(1285);
	v->a[53676] = 12;
	v->a[53677] = anon_sym_AMP_AMP;
	v->a[53678] = anon_sym_PIPE_PIPE;
	v->a[53679] = anon_sym_LT;
	small_parse_table_2684(v);
}

void	small_parse_table_2684(t_small_parse_table_array *v)
{
	v->a[53680] = anon_sym_GT;
	v->a[53681] = anon_sym_GT_GT;
	v->a[53682] = anon_sym_AMP_GT;
	v->a[53683] = anon_sym_AMP_GT_GT;
	v->a[53684] = anon_sym_LT_AMP;
	v->a[53685] = anon_sym_GT_AMP;
	v->a[53686] = anon_sym_GT_PIPE;
	v->a[53687] = anon_sym_LT_AMP_DASH;
	v->a[53688] = anon_sym_GT_AMP_DASH;
	v->a[53689] = 3;
	v->a[53690] = actions(3);
	v->a[53691] = 1;
	v->a[53692] = sym_comment;
	v->a[53693] = actions(2754);
	v->a[53694] = 6;
	v->a[53695] = sym_file_descriptor;
	v->a[53696] = sym_test_operator;
	v->a[53697] = sym__bare_dollar;
	v->a[53698] = sym__brace_start;
	v->a[53699] = ts_builtin_sym_end;
	small_parse_table_2685(v);
}

/* EOF small_parse_table_536.c */

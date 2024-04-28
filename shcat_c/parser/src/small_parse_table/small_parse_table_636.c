/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_636.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3180(t_small_parse_table_array *v)
{
	v->a[63600] = aux_sym_number_token1;
	v->a[63601] = aux_sym_number_token2;
	v->a[63602] = anon_sym_DOLLAR_LBRACE;
	v->a[63603] = anon_sym_DOLLAR_LPAREN;
	v->a[63604] = anon_sym_BQUOTE;
	v->a[63605] = anon_sym_DOLLAR_BQUOTE;
	v->a[63606] = anon_sym_LT_LPAREN;
	v->a[63607] = anon_sym_GT_LPAREN;
	v->a[63608] = aux_sym__simple_variable_name_token1;
	v->a[63609] = sym_word;
	v->a[63610] = 6;
	v->a[63611] = actions(3);
	v->a[63612] = 1;
	v->a[63613] = sym_comment;
	v->a[63614] = actions(5648);
	v->a[63615] = 1;
	v->a[63616] = aux_sym_concatenation_token1;
	v->a[63617] = actions(5654);
	v->a[63618] = 1;
	v->a[63619] = sym__concat;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = state(1333);
	v->a[63621] = 1;
	v->a[63622] = aux_sym_concatenation_repeat1;
	v->a[63623] = actions(5391);
	v->a[63624] = 6;
	v->a[63625] = sym_file_descriptor;
	v->a[63626] = sym_variable_name;
	v->a[63627] = sym_test_operator;
	v->a[63628] = sym__brace_start;
	v->a[63629] = ts_builtin_sym_end;
	v->a[63630] = aux_sym_heredoc_redirect_token1;
	v->a[63631] = actions(5389);
	v->a[63632] = 37;
	v->a[63633] = anon_sym_LPAREN_LPAREN;
	v->a[63634] = anon_sym_SEMI;
	v->a[63635] = anon_sym_PIPE_PIPE;
	v->a[63636] = anon_sym_AMP_AMP;
	v->a[63637] = anon_sym_PIPE;
	v->a[63638] = anon_sym_AMP;
	v->a[63639] = anon_sym_LT;
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = anon_sym_GT;
	v->a[63641] = anon_sym_LT_LT;
	v->a[63642] = anon_sym_GT_GT;
	v->a[63643] = anon_sym_SEMI_SEMI;
	v->a[63644] = anon_sym_PIPE_AMP;
	v->a[63645] = anon_sym_AMP_GT;
	v->a[63646] = anon_sym_AMP_GT_GT;
	v->a[63647] = anon_sym_LT_AMP;
	v->a[63648] = anon_sym_GT_AMP;
	v->a[63649] = anon_sym_GT_PIPE;
	v->a[63650] = anon_sym_LT_AMP_DASH;
	v->a[63651] = anon_sym_GT_AMP_DASH;
	v->a[63652] = anon_sym_LT_LT_DASH;
	v->a[63653] = anon_sym_LT_LT_LT;
	v->a[63654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63655] = anon_sym_DOLLAR_LBRACK;
	v->a[63656] = anon_sym_DOLLAR;
	v->a[63657] = sym__special_character;
	v->a[63658] = anon_sym_DQUOTE;
	v->a[63659] = sym_raw_string;
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = sym_ansi_c_string;
	v->a[63661] = aux_sym_number_token1;
	v->a[63662] = aux_sym_number_token2;
	v->a[63663] = anon_sym_DOLLAR_LBRACE;
	v->a[63664] = anon_sym_DOLLAR_LPAREN;
	v->a[63665] = anon_sym_BQUOTE;
	v->a[63666] = anon_sym_DOLLAR_BQUOTE;
	v->a[63667] = anon_sym_LT_LPAREN;
	v->a[63668] = anon_sym_GT_LPAREN;
	v->a[63669] = sym_word;
	v->a[63670] = 3;
	v->a[63671] = actions(3);
	v->a[63672] = 1;
	v->a[63673] = sym_comment;
	v->a[63674] = actions(1314);
	v->a[63675] = 5;
	v->a[63676] = sym_file_descriptor;
	v->a[63677] = sym__concat;
	v->a[63678] = sym_test_operator;
	v->a[63679] = sym__brace_start;
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = aux_sym_heredoc_redirect_token1;
	v->a[63681] = actions(1312);
	v->a[63682] = 41;
	v->a[63683] = anon_sym_LPAREN_LPAREN;
	v->a[63684] = anon_sym_SEMI;
	v->a[63685] = anon_sym_PIPE_PIPE;
	v->a[63686] = anon_sym_AMP_AMP;
	v->a[63687] = anon_sym_PIPE;
	v->a[63688] = anon_sym_AMP;
	v->a[63689] = anon_sym_LT;
	v->a[63690] = anon_sym_GT;
	v->a[63691] = anon_sym_LT_LT;
	v->a[63692] = anon_sym_GT_GT;
	v->a[63693] = anon_sym_esac;
	v->a[63694] = anon_sym_SEMI_SEMI;
	v->a[63695] = anon_sym_SEMI_AMP;
	v->a[63696] = anon_sym_SEMI_SEMI_AMP;
	v->a[63697] = anon_sym_PIPE_AMP;
	v->a[63698] = anon_sym_AMP_GT;
	v->a[63699] = anon_sym_AMP_GT_GT;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */

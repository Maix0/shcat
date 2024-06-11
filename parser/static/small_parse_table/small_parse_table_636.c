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
	v->a[63600] = sym_arithmetic_expansion;
	v->a[63601] = sym_string;
	v->a[63602] = sym_simple_expansion;
	v->a[63603] = sym_expansion;
	v->a[63604] = sym_command_substitution;
	v->a[63605] = 3;
	v->a[63606] = actions(3);
	v->a[63607] = 1;
	v->a[63608] = sym_comment;
	v->a[63609] = actions(1153);
	v->a[63610] = 5;
	v->a[63611] = sym_file_descriptor;
	v->a[63612] = sym__concat;
	v->a[63613] = sym_variable_name;
	v->a[63614] = ts_builtin_sym_end;
	v->a[63615] = aux_sym_heredoc_redirect_token1;
	v->a[63616] = actions(1151);
	v->a[63617] = 21;
	v->a[63618] = anon_sym_PIPE;
	v->a[63619] = anon_sym_RPAREN;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = anon_sym_SEMI_SEMI;
	v->a[63621] = anon_sym_AMP_AMP;
	v->a[63622] = anon_sym_PIPE_PIPE;
	v->a[63623] = anon_sym_LT;
	v->a[63624] = anon_sym_GT;
	v->a[63625] = anon_sym_GT_GT;
	v->a[63626] = anon_sym_AMP_GT;
	v->a[63627] = anon_sym_AMP_GT_GT;
	v->a[63628] = anon_sym_LT_AMP;
	v->a[63629] = anon_sym_GT_AMP;
	v->a[63630] = anon_sym_GT_PIPE;
	v->a[63631] = anon_sym_LT_AMP_DASH;
	v->a[63632] = anon_sym_GT_AMP_DASH;
	v->a[63633] = anon_sym_LT_LT;
	v->a[63634] = anon_sym_LT_LT_DASH;
	v->a[63635] = anon_sym_AMP;
	v->a[63636] = aux_sym_concatenation_token1;
	v->a[63637] = anon_sym_BQUOTE;
	v->a[63638] = anon_sym_SEMI;
	v->a[63639] = 6;
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = actions(3);
	v->a[63641] = 1;
	v->a[63642] = sym_comment;
	v->a[63643] = actions(1565);
	v->a[63644] = 1;
	v->a[63645] = sym_file_descriptor;
	v->a[63646] = actions(1568);
	v->a[63647] = 1;
	v->a[63648] = sym_variable_name;
	v->a[63649] = actions(1560);
	v->a[63650] = 5;
	v->a[63651] = anon_sym_PIPE;
	v->a[63652] = anon_sym_AMP_AMP;
	v->a[63653] = anon_sym_PIPE_PIPE;
	v->a[63654] = anon_sym_LT_LT;
	v->a[63655] = anon_sym_LT_LT_DASH;
	v->a[63656] = actions(1558);
	v->a[63657] = 9;
	v->a[63658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63659] = anon_sym_DOLLAR;
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = anon_sym_DQUOTE;
	v->a[63661] = sym_raw_string;
	v->a[63662] = sym_number;
	v->a[63663] = anon_sym_DOLLAR_LBRACE;
	v->a[63664] = anon_sym_DOLLAR_LPAREN;
	v->a[63665] = anon_sym_BQUOTE;
	v->a[63666] = sym_word;
	v->a[63667] = actions(1562);
	v->a[63668] = 10;
	v->a[63669] = anon_sym_LT;
	v->a[63670] = anon_sym_GT;
	v->a[63671] = anon_sym_GT_GT;
	v->a[63672] = anon_sym_AMP_GT;
	v->a[63673] = anon_sym_AMP_GT_GT;
	v->a[63674] = anon_sym_LT_AMP;
	v->a[63675] = anon_sym_GT_AMP;
	v->a[63676] = anon_sym_GT_PIPE;
	v->a[63677] = anon_sym_LT_AMP_DASH;
	v->a[63678] = anon_sym_GT_AMP_DASH;
	v->a[63679] = 3;
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = actions(3);
	v->a[63681] = 1;
	v->a[63682] = sym_comment;
	v->a[63683] = actions(1145);
	v->a[63684] = 5;
	v->a[63685] = sym_file_descriptor;
	v->a[63686] = sym__concat;
	v->a[63687] = sym_variable_name;
	v->a[63688] = ts_builtin_sym_end;
	v->a[63689] = aux_sym_heredoc_redirect_token1;
	v->a[63690] = actions(1143);
	v->a[63691] = 21;
	v->a[63692] = anon_sym_PIPE;
	v->a[63693] = anon_sym_RPAREN;
	v->a[63694] = anon_sym_SEMI_SEMI;
	v->a[63695] = anon_sym_AMP_AMP;
	v->a[63696] = anon_sym_PIPE_PIPE;
	v->a[63697] = anon_sym_LT;
	v->a[63698] = anon_sym_GT;
	v->a[63699] = anon_sym_GT_GT;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */

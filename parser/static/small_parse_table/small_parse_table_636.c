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
	v->a[63600] = 2;
	v->a[63601] = sym_file_descriptor;
	v->a[63602] = aux_sym_heredoc_redirect_token1;
	v->a[63603] = actions(2081);
	v->a[63604] = 15;
	v->a[63605] = anon_sym_esac;
	v->a[63606] = anon_sym_PIPE;
	v->a[63607] = anon_sym_SEMI_SEMI;
	v->a[63608] = anon_sym_AMP_AMP;
	v->a[63609] = anon_sym_PIPE_PIPE;
	v->a[63610] = anon_sym_LT;
	v->a[63611] = anon_sym_GT;
	v->a[63612] = anon_sym_GT_GT;
	v->a[63613] = anon_sym_LT_AMP;
	v->a[63614] = anon_sym_GT_AMP;
	v->a[63615] = anon_sym_GT_PIPE;
	v->a[63616] = anon_sym_LT_GT;
	v->a[63617] = anon_sym_LT_LT;
	v->a[63618] = anon_sym_LT_LT_DASH;
	v->a[63619] = anon_sym_SEMI;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = 10;
	v->a[63621] = actions(3);
	v->a[63622] = 1;
	v->a[63623] = sym_comment;
	v->a[63624] = actions(2331);
	v->a[63625] = 1;
	v->a[63626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63627] = actions(2333);
	v->a[63628] = 1;
	v->a[63629] = anon_sym_DOLLAR;
	v->a[63630] = actions(2335);
	v->a[63631] = 1;
	v->a[63632] = anon_sym_DQUOTE;
	v->a[63633] = actions(2337);
	v->a[63634] = 1;
	v->a[63635] = anon_sym_DOLLAR_LBRACE;
	v->a[63636] = actions(2339);
	v->a[63637] = 1;
	v->a[63638] = anon_sym_DOLLAR_LPAREN;
	v->a[63639] = actions(2341);
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = 1;
	v->a[63641] = anon_sym_BQUOTE;
	v->a[63642] = actions(2343);
	v->a[63643] = 1;
	v->a[63644] = sym__bare_dollar;
	v->a[63645] = actions(2329);
	v->a[63646] = 5;
	v->a[63647] = aux_sym_concatenation_token1;
	v->a[63648] = sym_raw_string;
	v->a[63649] = sym_number;
	v->a[63650] = sym__comment_word;
	v->a[63651] = sym_word;
	v->a[63652] = state(488);
	v->a[63653] = 5;
	v->a[63654] = sym_arithmetic_expansion;
	v->a[63655] = sym_string;
	v->a[63656] = sym_simple_expansion;
	v->a[63657] = sym_expansion;
	v->a[63658] = sym_command_substitution;
	v->a[63659] = 12;
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = actions(3);
	v->a[63661] = 1;
	v->a[63662] = sym_comment;
	v->a[63663] = actions(1012);
	v->a[63664] = 1;
	v->a[63665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63666] = actions(1014);
	v->a[63667] = 1;
	v->a[63668] = anon_sym_DOLLAR;
	v->a[63669] = actions(1016);
	v->a[63670] = 1;
	v->a[63671] = anon_sym_DQUOTE;
	v->a[63672] = actions(1018);
	v->a[63673] = 1;
	v->a[63674] = anon_sym_DOLLAR_LBRACE;
	v->a[63675] = actions(1020);
	v->a[63676] = 1;
	v->a[63677] = anon_sym_DOLLAR_LPAREN;
	v->a[63678] = actions(1022);
	v->a[63679] = 1;
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = anon_sym_BQUOTE;
	v->a[63681] = actions(2345);
	v->a[63682] = 1;
	v->a[63683] = aux_sym_heredoc_redirect_token1;
	v->a[63684] = state(1250);
	v->a[63685] = 1;
	v->a[63686] = aux_sym__heredoc_command;
	v->a[63687] = state(1722);
	v->a[63688] = 1;
	v->a[63689] = sym_concatenation;
	v->a[63690] = actions(1002);
	v->a[63691] = 3;
	v->a[63692] = sym_raw_string;
	v->a[63693] = sym_number;
	v->a[63694] = sym_word;
	v->a[63695] = state(1516);
	v->a[63696] = 5;
	v->a[63697] = sym_arithmetic_expansion;
	v->a[63698] = sym_string;
	v->a[63699] = sym_simple_expansion;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */

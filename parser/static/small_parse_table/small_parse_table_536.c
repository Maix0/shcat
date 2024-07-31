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
	v->a[53600] = 1;
	v->a[53601] = anon_sym_DOLLAR_LBRACE;
	v->a[53602] = actions(2001);
	v->a[53603] = 1;
	v->a[53604] = anon_sym_DOLLAR_LPAREN;
	v->a[53605] = actions(2003);
	v->a[53606] = 1;
	v->a[53607] = anon_sym_BQUOTE;
	v->a[53608] = actions(2005);
	v->a[53609] = 1;
	v->a[53610] = sym__bare_dollar;
	v->a[53611] = actions(1991);
	v->a[53612] = 5;
	v->a[53613] = aux_sym_concatenation_token1;
	v->a[53614] = sym_raw_string;
	v->a[53615] = sym_number;
	v->a[53616] = sym__comment_word;
	v->a[53617] = sym_word;
	v->a[53618] = state(377);
	v->a[53619] = 5;
	small_parse_table_2681(v);
}

void	small_parse_table_2681(t_small_parse_table_array *v)
{
	v->a[53620] = sym_arithmetic_expansion;
	v->a[53621] = sym_string;
	v->a[53622] = sym_simple_expansion;
	v->a[53623] = sym_expansion;
	v->a[53624] = sym_command_substitution;
	v->a[53625] = 5;
	v->a[53626] = actions(3);
	v->a[53627] = 1;
	v->a[53628] = sym_comment;
	v->a[53629] = actions(2007);
	v->a[53630] = 1;
	v->a[53631] = anon_sym_PIPE;
	v->a[53632] = state(1079);
	v->a[53633] = 1;
	v->a[53634] = aux_sym_pipeline_repeat1;
	v->a[53635] = actions(1916);
	v->a[53636] = 2;
	v->a[53637] = ts_builtin_sym_end;
	v->a[53638] = aux_sym_heredoc_redirect_token1;
	v->a[53639] = actions(1914);
	small_parse_table_2682(v);
}

void	small_parse_table_2682(t_small_parse_table_array *v)
{
	v->a[53640] = 13;
	v->a[53641] = anon_sym_SEMI_SEMI;
	v->a[53642] = anon_sym_AMP_AMP;
	v->a[53643] = anon_sym_PIPE_PIPE;
	v->a[53644] = anon_sym_LT;
	v->a[53645] = anon_sym_GT;
	v->a[53646] = anon_sym_GT_GT;
	v->a[53647] = anon_sym_LT_AMP;
	v->a[53648] = anon_sym_GT_AMP;
	v->a[53649] = anon_sym_GT_PIPE;
	v->a[53650] = anon_sym_LT_GT;
	v->a[53651] = anon_sym_LT_LT;
	v->a[53652] = anon_sym_LT_LT_DASH;
	v->a[53653] = anon_sym_SEMI;
	v->a[53654] = 10;
	v->a[53655] = actions(3);
	v->a[53656] = 1;
	v->a[53657] = sym_comment;
	v->a[53658] = actions(1922);
	v->a[53659] = 1;
	small_parse_table_2683(v);
}

void	small_parse_table_2683(t_small_parse_table_array *v)
{
	v->a[53660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53661] = actions(1926);
	v->a[53662] = 1;
	v->a[53663] = anon_sym_DQUOTE;
	v->a[53664] = actions(1928);
	v->a[53665] = 1;
	v->a[53666] = anon_sym_DOLLAR_LBRACE;
	v->a[53667] = actions(1930);
	v->a[53668] = 1;
	v->a[53669] = anon_sym_DOLLAR_LPAREN;
	v->a[53670] = actions(1932);
	v->a[53671] = 1;
	v->a[53672] = anon_sym_BQUOTE;
	v->a[53673] = actions(1934);
	v->a[53674] = 1;
	v->a[53675] = sym__bare_dollar;
	v->a[53676] = actions(2009);
	v->a[53677] = 1;
	v->a[53678] = anon_sym_DOLLAR;
	v->a[53679] = actions(1920);
	small_parse_table_2684(v);
}

void	small_parse_table_2684(t_small_parse_table_array *v)
{
	v->a[53680] = 5;
	v->a[53681] = aux_sym_concatenation_token1;
	v->a[53682] = sym_raw_string;
	v->a[53683] = sym_number;
	v->a[53684] = sym__comment_word;
	v->a[53685] = sym_word;
	v->a[53686] = state(810);
	v->a[53687] = 5;
	v->a[53688] = sym_arithmetic_expansion;
	v->a[53689] = sym_string;
	v->a[53690] = sym_simple_expansion;
	v->a[53691] = sym_expansion;
	v->a[53692] = sym_command_substitution;
	v->a[53693] = 11;
	v->a[53694] = actions(3);
	v->a[53695] = 1;
	v->a[53696] = sym_comment;
	v->a[53697] = actions(1341);
	v->a[53698] = 1;
	v->a[53699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2685(v);
}

/* EOF small_parse_table_536.c */

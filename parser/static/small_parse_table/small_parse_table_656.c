/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_656.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3280(t_small_parse_table_array *v)
{
	v->a[65600] = anon_sym_LT_LT;
	v->a[65601] = anon_sym_LT_LT_DASH;
	v->a[65602] = anon_sym_AMP;
	v->a[65603] = anon_sym_SEMI;
	v->a[65604] = 3;
	v->a[65605] = actions(3);
	v->a[65606] = 1;
	v->a[65607] = sym_comment;
	v->a[65608] = actions(2066);
	v->a[65609] = 2;
	v->a[65610] = sym_file_descriptor;
	v->a[65611] = aux_sym_heredoc_redirect_token1;
	v->a[65612] = actions(2068);
	v->a[65613] = 16;
	v->a[65614] = anon_sym_esac;
	v->a[65615] = anon_sym_PIPE;
	v->a[65616] = anon_sym_SEMI_SEMI;
	v->a[65617] = anon_sym_AMP_AMP;
	v->a[65618] = anon_sym_PIPE_PIPE;
	v->a[65619] = anon_sym_LT;
	small_parse_table_3281(v);
}

void	small_parse_table_3281(t_small_parse_table_array *v)
{
	v->a[65620] = anon_sym_GT;
	v->a[65621] = anon_sym_GT_GT;
	v->a[65622] = anon_sym_LT_AMP;
	v->a[65623] = anon_sym_GT_AMP;
	v->a[65624] = anon_sym_GT_PIPE;
	v->a[65625] = anon_sym_LT_GT;
	v->a[65626] = anon_sym_LT_LT;
	v->a[65627] = anon_sym_LT_LT_DASH;
	v->a[65628] = anon_sym_AMP;
	v->a[65629] = anon_sym_SEMI;
	v->a[65630] = 10;
	v->a[65631] = actions(3);
	v->a[65632] = 1;
	v->a[65633] = sym_comment;
	v->a[65634] = actions(2336);
	v->a[65635] = 1;
	v->a[65636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65637] = actions(2338);
	v->a[65638] = 1;
	v->a[65639] = anon_sym_DOLLAR;
	small_parse_table_3282(v);
}

void	small_parse_table_3282(t_small_parse_table_array *v)
{
	v->a[65640] = actions(2340);
	v->a[65641] = 1;
	v->a[65642] = anon_sym_DQUOTE;
	v->a[65643] = actions(2342);
	v->a[65644] = 1;
	v->a[65645] = anon_sym_DOLLAR_LBRACE;
	v->a[65646] = actions(2344);
	v->a[65647] = 1;
	v->a[65648] = anon_sym_DOLLAR_LPAREN;
	v->a[65649] = actions(2346);
	v->a[65650] = 1;
	v->a[65651] = anon_sym_BQUOTE;
	v->a[65652] = actions(2348);
	v->a[65653] = 1;
	v->a[65654] = sym__bare_dollar;
	v->a[65655] = actions(2334);
	v->a[65656] = 5;
	v->a[65657] = aux_sym_concatenation_token1;
	v->a[65658] = sym_raw_string;
	v->a[65659] = sym_number;
	small_parse_table_3283(v);
}

void	small_parse_table_3283(t_small_parse_table_array *v)
{
	v->a[65660] = sym__comment_word;
	v->a[65661] = sym_word;
	v->a[65662] = state(922);
	v->a[65663] = 5;
	v->a[65664] = sym_arithmetic_expansion;
	v->a[65665] = sym_string;
	v->a[65666] = sym_simple_expansion;
	v->a[65667] = sym_expansion;
	v->a[65668] = sym_command_substitution;
	v->a[65669] = 10;
	v->a[65670] = actions(3);
	v->a[65671] = 1;
	v->a[65672] = sym_comment;
	v->a[65673] = actions(1114);
	v->a[65674] = 1;
	v->a[65675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65676] = actions(1118);
	v->a[65677] = 1;
	v->a[65678] = anon_sym_DQUOTE;
	v->a[65679] = actions(1120);
	small_parse_table_3284(v);
}

void	small_parse_table_3284(t_small_parse_table_array *v)
{
	v->a[65680] = 1;
	v->a[65681] = anon_sym_DOLLAR_LBRACE;
	v->a[65682] = actions(1122);
	v->a[65683] = 1;
	v->a[65684] = anon_sym_DOLLAR_LPAREN;
	v->a[65685] = actions(1124);
	v->a[65686] = 1;
	v->a[65687] = anon_sym_BQUOTE;
	v->a[65688] = actions(2352);
	v->a[65689] = 1;
	v->a[65690] = anon_sym_DOLLAR;
	v->a[65691] = actions(2354);
	v->a[65692] = 1;
	v->a[65693] = sym__bare_dollar;
	v->a[65694] = actions(2350);
	v->a[65695] = 5;
	v->a[65696] = aux_sym_concatenation_token1;
	v->a[65697] = sym_raw_string;
	v->a[65698] = sym_number;
	v->a[65699] = sym__comment_word;
	small_parse_table_3285(v);
}

/* EOF small_parse_table_656.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_7.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_35(t_small_parse_table_array *v)
{
	v->a[700] = anon_sym_DOLLAR;
	v->a[701] = anon_sym_POUND;
	v->a[702] = anon_sym_AT;
	v->a[703] = anon_sym_0;
	v->a[704] = anon_sym__;
	v->a[705] = actions(826);
	v->a[706] = 34;
	v->a[707] = anon_sym_esac;
	v->a[708] = anon_sym_PIPE;
	v->a[709] = anon_sym_SEMI_SEMI;
	v->a[710] = anon_sym_SEMI_AMP;
	v->a[711] = anon_sym_SEMI_SEMI_AMP;
	v->a[712] = anon_sym_PIPE_AMP;
	v->a[713] = anon_sym_AMP_AMP;
	v->a[714] = anon_sym_PIPE_PIPE;
	v->a[715] = anon_sym_LT;
	v->a[716] = anon_sym_GT;
	v->a[717] = anon_sym_GT_GT;
	v->a[718] = anon_sym_AMP_GT;
	v->a[719] = anon_sym_AMP_GT_GT;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = anon_sym_LT_AMP;
	v->a[721] = anon_sym_GT_AMP;
	v->a[722] = anon_sym_GT_PIPE;
	v->a[723] = anon_sym_LT_AMP_DASH;
	v->a[724] = anon_sym_GT_AMP_DASH;
	v->a[725] = anon_sym_LT_LT;
	v->a[726] = anon_sym_LT_LT_DASH;
	v->a[727] = aux_sym_heredoc_redirect_token1;
	v->a[728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[729] = anon_sym_AMP;
	v->a[730] = sym__special_character;
	v->a[731] = anon_sym_DQUOTE;
	v->a[732] = sym_raw_string;
	v->a[733] = aux_sym_number_token1;
	v->a[734] = aux_sym_number_token2;
	v->a[735] = anon_sym_DOLLAR_LBRACE;
	v->a[736] = anon_sym_DOLLAR_LPAREN;
	v->a[737] = anon_sym_BQUOTE;
	v->a[738] = anon_sym_DOLLAR_BQUOTE;
	v->a[739] = sym_word;
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = anon_sym_SEMI;
	v->a[741] = 21;
	v->a[742] = actions(3);
	v->a[743] = 1;
	v->a[744] = sym_comment;
	v->a[745] = actions(845);
	v->a[746] = 1;
	v->a[747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[748] = actions(848);
	v->a[749] = 1;
	v->a[750] = anon_sym_DOLLAR;
	v->a[751] = actions(851);
	v->a[752] = 1;
	v->a[753] = sym__special_character;
	v->a[754] = actions(854);
	v->a[755] = 1;
	v->a[756] = anon_sym_DQUOTE;
	v->a[757] = actions(857);
	v->a[758] = 1;
	v->a[759] = aux_sym_number_token1;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = actions(860);
	v->a[761] = 1;
	v->a[762] = aux_sym_number_token2;
	v->a[763] = actions(863);
	v->a[764] = 1;
	v->a[765] = anon_sym_DOLLAR_LBRACE;
	v->a[766] = actions(866);
	v->a[767] = 1;
	v->a[768] = anon_sym_DOLLAR_LPAREN;
	v->a[769] = actions(869);
	v->a[770] = 1;
	v->a[771] = anon_sym_BQUOTE;
	v->a[772] = actions(872);
	v->a[773] = 1;
	v->a[774] = anon_sym_DOLLAR_BQUOTE;
	v->a[775] = actions(875);
	v->a[776] = 1;
	v->a[777] = aux_sym__simple_variable_name_token1;
	v->a[778] = actions(878);
	v->a[779] = 1;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = sym_variable_name;
	v->a[781] = actions(881);
	v->a[782] = 1;
	v->a[783] = sym_test_operator;
	v->a[784] = actions(884);
	v->a[785] = 1;
	v->a[786] = sym__brace_start;
	v->a[787] = state(962);
	v->a[788] = 1;
	v->a[789] = aux_sym__literal_repeat1;
	v->a[790] = actions(766);
	v->a[791] = 2;
	v->a[792] = sym_file_descriptor;
	v->a[793] = aux_sym_heredoc_redirect_token1;
	v->a[794] = actions(842);
	v->a[795] = 2;
	v->a[796] = sym_raw_string;
	v->a[797] = sym_word;
	v->a[798] = state(266);
	v->a[799] = 3;
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */

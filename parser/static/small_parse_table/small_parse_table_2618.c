/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2618.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13090(t_small_parse_table_array *v)
{
	v->a[261800] = anon_sym_LT_AMP;
	v->a[261801] = anon_sym_GT_AMP;
	v->a[261802] = anon_sym_GT_PIPE;
	v->a[261803] = anon_sym_LT_AMP_DASH;
	v->a[261804] = anon_sym_GT_AMP_DASH;
	v->a[261805] = anon_sym_LT_LT_DASH;
	v->a[261806] = 16;
	v->a[261807] = actions(3);
	v->a[261808] = 1;
	v->a[261809] = sym_comment;
	v->a[261810] = actions(11760);
	v->a[261811] = 1;
	v->a[261812] = anon_sym_BANG2;
	v->a[261813] = actions(11764);
	v->a[261814] = 1;
	v->a[261815] = anon_sym_DOLLAR_LPAREN;
	v->a[261816] = actions(11766);
	v->a[261817] = 1;
	v->a[261818] = anon_sym_BQUOTE;
	v->a[261819] = actions(11768);
	small_parse_table_13091(v);
}

void	small_parse_table_13091(t_small_parse_table_array *v)
{
	v->a[261820] = 1;
	v->a[261821] = anon_sym_DOLLAR_BQUOTE;
	v->a[261822] = actions(11770);
	v->a[261823] = 1;
	v->a[261824] = aux_sym__simple_variable_name_token1;
	v->a[261825] = actions(11772);
	v->a[261826] = 1;
	v->a[261827] = sym_variable_name;
	v->a[261828] = actions(12009);
	v->a[261829] = 1;
	v->a[261830] = anon_sym_RBRACE3;
	v->a[261831] = state(3532);
	v->a[261832] = 1;
	v->a[261833] = sym_subscript;
	v->a[261834] = state(6428);
	v->a[261835] = 1;
	v->a[261836] = aux_sym__expansion_body_repeat1;
	v->a[261837] = state(6472);
	v->a[261838] = 1;
	v->a[261839] = sym_command_substitution;
	small_parse_table_13092(v);
}

void	small_parse_table_13092(t_small_parse_table_array *v)
{
	v->a[261840] = state(7464);
	v->a[261841] = 1;
	v->a[261842] = sym__expansion_body;
	v->a[261843] = actions(11762);
	v->a[261844] = 2;
	v->a[261845] = anon_sym_POUND2;
	v->a[261846] = anon_sym_EQ2;
	v->a[261847] = actions(8050);
	v->a[261848] = 3;
	v->a[261849] = sym__external_expansion_sym_hash;
	v->a[261850] = sym__external_expansion_sym_bang;
	v->a[261851] = sym__external_expansion_sym_equal;
	v->a[261852] = actions(11754);
	v->a[261853] = 4;
	v->a[261854] = anon_sym_DASH;
	v->a[261855] = anon_sym_STAR;
	v->a[261856] = anon_sym_QMARK;
	v->a[261857] = anon_sym_AT2;
	v->a[261858] = actions(11756);
	v->a[261859] = 5;
	small_parse_table_13093(v);
}

void	small_parse_table_13093(t_small_parse_table_array *v)
{
	v->a[261860] = anon_sym_BANG;
	v->a[261861] = anon_sym_DOLLAR;
	v->a[261862] = anon_sym_POUND;
	v->a[261863] = anon_sym_0;
	v->a[261864] = anon_sym__;
	v->a[261865] = 3;
	v->a[261866] = actions(3);
	v->a[261867] = 1;
	v->a[261868] = sym_comment;
	v->a[261869] = actions(1338);
	v->a[261870] = 3;
	v->a[261871] = sym_file_descriptor;
	v->a[261872] = sym__concat;
	v->a[261873] = aux_sym_heredoc_redirect_token1;
	v->a[261874] = actions(1336);
	v->a[261875] = 22;
	v->a[261876] = anon_sym_SEMI;
	v->a[261877] = anon_sym_PIPE_PIPE;
	v->a[261878] = anon_sym_AMP_AMP;
	v->a[261879] = anon_sym_PIPE;
	small_parse_table_13094(v);
}

void	small_parse_table_13094(t_small_parse_table_array *v)
{
	v->a[261880] = anon_sym_AMP;
	v->a[261881] = anon_sym_LT;
	v->a[261882] = anon_sym_GT;
	v->a[261883] = anon_sym_LT_LT;
	v->a[261884] = anon_sym_GT_GT;
	v->a[261885] = anon_sym_SEMI_SEMI;
	v->a[261886] = anon_sym_SEMI_AMP;
	v->a[261887] = anon_sym_SEMI_SEMI_AMP;
	v->a[261888] = anon_sym_PIPE_AMP;
	v->a[261889] = anon_sym_AMP_GT;
	v->a[261890] = anon_sym_AMP_GT_GT;
	v->a[261891] = anon_sym_LT_AMP;
	v->a[261892] = anon_sym_GT_AMP;
	v->a[261893] = anon_sym_GT_PIPE;
	v->a[261894] = anon_sym_LT_AMP_DASH;
	v->a[261895] = anon_sym_GT_AMP_DASH;
	v->a[261896] = anon_sym_LT_LT_DASH;
	v->a[261897] = aux_sym_concatenation_token1;
	v->a[261898] = 16;
	v->a[261899] = actions(3);
	small_parse_table_13095(v);
}

/* EOF small_parse_table_2618.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_208.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1040(t_small_parse_table_array *v)
{
	v->a[20800] = state(334);
	v->a[20801] = 5;
	v->a[20802] = sym_arithmetic_expansion;
	v->a[20803] = sym_string;
	v->a[20804] = sym_simple_expansion;
	v->a[20805] = sym_expansion;
	v->a[20806] = sym_command_substitution;
	v->a[20807] = actions(459);
	v->a[20808] = 20;
	v->a[20809] = anon_sym_PIPE;
	v->a[20810] = anon_sym_RPAREN;
	v->a[20811] = anon_sym_SEMI_SEMI;
	v->a[20812] = anon_sym_AMP_AMP;
	v->a[20813] = anon_sym_PIPE_PIPE;
	v->a[20814] = anon_sym_LT;
	v->a[20815] = anon_sym_GT;
	v->a[20816] = anon_sym_GT_GT;
	v->a[20817] = anon_sym_AMP_GT;
	v->a[20818] = anon_sym_AMP_GT_GT;
	v->a[20819] = anon_sym_LT_AMP;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = anon_sym_GT_AMP;
	v->a[20821] = anon_sym_GT_PIPE;
	v->a[20822] = anon_sym_LT_AMP_DASH;
	v->a[20823] = anon_sym_GT_AMP_DASH;
	v->a[20824] = anon_sym_LT_LT;
	v->a[20825] = anon_sym_LT_LT_DASH;
	v->a[20826] = aux_sym_heredoc_redirect_token1;
	v->a[20827] = anon_sym_AMP;
	v->a[20828] = anon_sym_SEMI;
	v->a[20829] = 6;
	v->a[20830] = actions(3);
	v->a[20831] = 1;
	v->a[20832] = sym_comment;
	v->a[20833] = actions(385);
	v->a[20834] = 1;
	v->a[20835] = sym_file_descriptor;
	v->a[20836] = actions(423);
	v->a[20837] = 1;
	v->a[20838] = sym_variable_name;
	v->a[20839] = actions(421);
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = 2;
	v->a[20841] = aux_sym__simple_variable_name_token1;
	v->a[20842] = aux_sym__multiline_variable_name_token1;
	v->a[20843] = actions(419);
	v->a[20844] = 9;
	v->a[20845] = anon_sym_BANG;
	v->a[20846] = anon_sym_DASH;
	v->a[20847] = anon_sym_STAR;
	v->a[20848] = anon_sym_QMARK;
	v->a[20849] = anon_sym_DOLLAR;
	v->a[20850] = anon_sym_POUND;
	v->a[20851] = anon_sym_AT;
	v->a[20852] = anon_sym_0;
	v->a[20853] = anon_sym__;
	v->a[20854] = actions(379);
	v->a[20855] = 27;
	v->a[20856] = anon_sym_PIPE;
	v->a[20857] = anon_sym_SEMI_SEMI;
	v->a[20858] = anon_sym_AMP_AMP;
	v->a[20859] = anon_sym_PIPE_PIPE;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = anon_sym_LT;
	v->a[20861] = anon_sym_GT;
	v->a[20862] = anon_sym_GT_GT;
	v->a[20863] = anon_sym_AMP_GT;
	v->a[20864] = anon_sym_AMP_GT_GT;
	v->a[20865] = anon_sym_LT_AMP;
	v->a[20866] = anon_sym_GT_AMP;
	v->a[20867] = anon_sym_GT_PIPE;
	v->a[20868] = anon_sym_LT_AMP_DASH;
	v->a[20869] = anon_sym_GT_AMP_DASH;
	v->a[20870] = anon_sym_LT_LT;
	v->a[20871] = anon_sym_LT_LT_DASH;
	v->a[20872] = aux_sym_heredoc_redirect_token1;
	v->a[20873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20874] = anon_sym_AMP;
	v->a[20875] = anon_sym_DQUOTE;
	v->a[20876] = sym_raw_string;
	v->a[20877] = sym_number;
	v->a[20878] = anon_sym_DOLLAR_LBRACE;
	v->a[20879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = anon_sym_BQUOTE;
	v->a[20881] = sym_word;
	v->a[20882] = anon_sym_SEMI;
	v->a[20883] = 6;
	v->a[20884] = actions(3);
	v->a[20885] = 1;
	v->a[20886] = sym_comment;
	v->a[20887] = actions(385);
	v->a[20888] = 1;
	v->a[20889] = sym_file_descriptor;
	v->a[20890] = actions(447);
	v->a[20891] = 1;
	v->a[20892] = sym_variable_name;
	v->a[20893] = actions(445);
	v->a[20894] = 2;
	v->a[20895] = aux_sym__simple_variable_name_token1;
	v->a[20896] = aux_sym__multiline_variable_name_token1;
	v->a[20897] = actions(443);
	v->a[20898] = 9;
	v->a[20899] = anon_sym_BANG;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */

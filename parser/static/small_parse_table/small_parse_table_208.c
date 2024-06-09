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
	v->a[20800] = anon_sym_SEMI_SEMI;
	v->a[20801] = anon_sym_AMP_AMP;
	v->a[20802] = anon_sym_PIPE_PIPE;
	v->a[20803] = anon_sym_LT;
	v->a[20804] = anon_sym_GT;
	v->a[20805] = anon_sym_GT_GT;
	v->a[20806] = anon_sym_AMP_GT;
	v->a[20807] = anon_sym_AMP_GT_GT;
	v->a[20808] = anon_sym_LT_AMP;
	v->a[20809] = anon_sym_GT_AMP;
	v->a[20810] = anon_sym_GT_PIPE;
	v->a[20811] = anon_sym_LT_AMP_DASH;
	v->a[20812] = anon_sym_GT_AMP_DASH;
	v->a[20813] = anon_sym_LT_LT;
	v->a[20814] = anon_sym_LT_LT_DASH;
	v->a[20815] = aux_sym_heredoc_redirect_token1;
	v->a[20816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20817] = anon_sym_AMP;
	v->a[20818] = anon_sym_DQUOTE;
	v->a[20819] = sym_raw_string;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = aux_sym_number_token1;
	v->a[20821] = aux_sym_number_token2;
	v->a[20822] = anon_sym_DOLLAR_LBRACE;
	v->a[20823] = anon_sym_DOLLAR_LPAREN;
	v->a[20824] = anon_sym_BQUOTE;
	v->a[20825] = sym_word;
	v->a[20826] = anon_sym_SEMI;
	v->a[20827] = 6;
	v->a[20828] = actions(3);
	v->a[20829] = 1;
	v->a[20830] = sym_comment;
	v->a[20831] = actions(421);
	v->a[20832] = 1;
	v->a[20833] = sym_variable_name;
	v->a[20834] = actions(413);
	v->a[20835] = 2;
	v->a[20836] = sym_file_descriptor;
	v->a[20837] = sym__bare_dollar;
	v->a[20838] = actions(419);
	v->a[20839] = 2;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = aux_sym__simple_variable_name_token1;
	v->a[20841] = aux_sym__multiline_variable_name_token1;
	v->a[20842] = actions(417);
	v->a[20843] = 9;
	v->a[20844] = anon_sym_BANG;
	v->a[20845] = anon_sym_DASH;
	v->a[20846] = anon_sym_STAR;
	v->a[20847] = anon_sym_QMARK;
	v->a[20848] = anon_sym_DOLLAR;
	v->a[20849] = anon_sym_POUND;
	v->a[20850] = anon_sym_AT;
	v->a[20851] = anon_sym_0;
	v->a[20852] = anon_sym__;
	v->a[20853] = actions(407);
	v->a[20854] = 30;
	v->a[20855] = anon_sym_LPAREN;
	v->a[20856] = anon_sym_PIPE;
	v->a[20857] = anon_sym_RPAREN;
	v->a[20858] = anon_sym_SEMI_SEMI;
	v->a[20859] = anon_sym_AMP_AMP;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = anon_sym_PIPE_PIPE;
	v->a[20861] = anon_sym_LT;
	v->a[20862] = anon_sym_GT;
	v->a[20863] = anon_sym_GT_GT;
	v->a[20864] = anon_sym_AMP_GT;
	v->a[20865] = anon_sym_AMP_GT_GT;
	v->a[20866] = anon_sym_LT_AMP;
	v->a[20867] = anon_sym_GT_AMP;
	v->a[20868] = anon_sym_GT_PIPE;
	v->a[20869] = anon_sym_LT_AMP_DASH;
	v->a[20870] = anon_sym_GT_AMP_DASH;
	v->a[20871] = anon_sym_LT_LT;
	v->a[20872] = anon_sym_LT_LT_DASH;
	v->a[20873] = aux_sym_heredoc_redirect_token1;
	v->a[20874] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20875] = anon_sym_AMP;
	v->a[20876] = anon_sym_DQUOTE;
	v->a[20877] = sym_raw_string;
	v->a[20878] = aux_sym_number_token1;
	v->a[20879] = aux_sym_number_token2;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = anon_sym_DOLLAR_LBRACE;
	v->a[20881] = anon_sym_DOLLAR_LPAREN;
	v->a[20882] = anon_sym_BQUOTE;
	v->a[20883] = sym_word;
	v->a[20884] = anon_sym_SEMI;
	v->a[20885] = 6;
	v->a[20886] = actions(3);
	v->a[20887] = 1;
	v->a[20888] = sym_comment;
	v->a[20889] = actions(427);
	v->a[20890] = 1;
	v->a[20891] = sym_variable_name;
	v->a[20892] = actions(425);
	v->a[20893] = 2;
	v->a[20894] = aux_sym__simple_variable_name_token1;
	v->a[20895] = aux_sym__multiline_variable_name_token1;
	v->a[20896] = actions(413);
	v->a[20897] = 3;
	v->a[20898] = sym_file_descriptor;
	v->a[20899] = sym__bare_dollar;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */

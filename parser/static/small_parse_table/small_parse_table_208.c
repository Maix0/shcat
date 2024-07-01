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
	v->a[20800] = anon_sym_PIPE;
	v->a[20801] = anon_sym_SEMI_SEMI;
	v->a[20802] = anon_sym_AMP_AMP;
	v->a[20803] = anon_sym_PIPE_PIPE;
	v->a[20804] = anon_sym_LT;
	v->a[20805] = anon_sym_GT;
	v->a[20806] = anon_sym_GT_GT;
	v->a[20807] = anon_sym_LT_AMP;
	v->a[20808] = anon_sym_GT_AMP;
	v->a[20809] = anon_sym_GT_PIPE;
	v->a[20810] = anon_sym_LT_GT;
	v->a[20811] = anon_sym_LT_LT;
	v->a[20812] = anon_sym_LT_LT_DASH;
	v->a[20813] = aux_sym_heredoc_redirect_token1;
	v->a[20814] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20815] = anon_sym_AMP;
	v->a[20816] = anon_sym_DOLLAR;
	v->a[20817] = anon_sym_DQUOTE;
	v->a[20818] = sym_raw_string;
	v->a[20819] = sym_number;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = anon_sym_DOLLAR_LBRACE;
	v->a[20821] = anon_sym_DOLLAR_LPAREN;
	v->a[20822] = anon_sym_BQUOTE;
	v->a[20823] = sym_word;
	v->a[20824] = anon_sym_SEMI;
	v->a[20825] = 14;
	v->a[20826] = actions(3);
	v->a[20827] = 1;
	v->a[20828] = sym_comment;
	v->a[20829] = actions(479);
	v->a[20830] = 1;
	v->a[20831] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20832] = actions(481);
	v->a[20833] = 1;
	v->a[20834] = anon_sym_DOLLAR;
	v->a[20835] = actions(483);
	v->a[20836] = 1;
	v->a[20837] = anon_sym_DQUOTE;
	v->a[20838] = actions(485);
	v->a[20839] = 1;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = anon_sym_DOLLAR_LBRACE;
	v->a[20841] = actions(487);
	v->a[20842] = 1;
	v->a[20843] = anon_sym_DOLLAR_LPAREN;
	v->a[20844] = actions(489);
	v->a[20845] = 1;
	v->a[20846] = anon_sym_BQUOTE;
	v->a[20847] = actions(491);
	v->a[20848] = 1;
	v->a[20849] = sym__bare_dollar;
	v->a[20850] = actions(560);
	v->a[20851] = 1;
	v->a[20852] = sym_file_descriptor;
	v->a[20853] = state(191);
	v->a[20854] = 1;
	v->a[20855] = aux_sym_command_repeat2;
	v->a[20856] = state(640);
	v->a[20857] = 1;
	v->a[20858] = sym_concatenation;
	v->a[20859] = actions(477);
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = 3;
	v->a[20861] = sym_raw_string;
	v->a[20862] = sym_number;
	v->a[20863] = sym_word;
	v->a[20864] = state(442);
	v->a[20865] = 5;
	v->a[20866] = sym_arithmetic_expansion;
	v->a[20867] = sym_string;
	v->a[20868] = sym_simple_expansion;
	v->a[20869] = sym_expansion;
	v->a[20870] = sym_command_substitution;
	v->a[20871] = actions(562);
	v->a[20872] = 17;
	v->a[20873] = anon_sym_esac;
	v->a[20874] = anon_sym_PIPE;
	v->a[20875] = anon_sym_SEMI_SEMI;
	v->a[20876] = anon_sym_AMP_AMP;
	v->a[20877] = anon_sym_PIPE_PIPE;
	v->a[20878] = anon_sym_LT;
	v->a[20879] = anon_sym_GT;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = anon_sym_GT_GT;
	v->a[20881] = anon_sym_LT_AMP;
	v->a[20882] = anon_sym_GT_AMP;
	v->a[20883] = anon_sym_GT_PIPE;
	v->a[20884] = anon_sym_LT_GT;
	v->a[20885] = anon_sym_LT_LT;
	v->a[20886] = anon_sym_LT_LT_DASH;
	v->a[20887] = aux_sym_heredoc_redirect_token1;
	v->a[20888] = anon_sym_AMP;
	v->a[20889] = anon_sym_SEMI;
	v->a[20890] = 3;
	v->a[20891] = actions(664);
	v->a[20892] = 1;
	v->a[20893] = sym_comment;
	v->a[20894] = actions(660);
	v->a[20895] = 13;
	v->a[20896] = anon_sym_PIPE;
	v->a[20897] = anon_sym_EQ;
	v->a[20898] = anon_sym_LT;
	v->a[20899] = anon_sym_GT;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */

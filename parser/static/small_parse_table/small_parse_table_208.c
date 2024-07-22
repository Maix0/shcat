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
	v->a[20800] = 2;
	v->a[20801] = sym_file_descriptor;
	v->a[20802] = sym_variable_name;
	v->a[20803] = state(203);
	v->a[20804] = 2;
	v->a[20805] = sym_concatenation;
	v->a[20806] = aux_sym_for_statement_repeat1;
	v->a[20807] = state(396);
	v->a[20808] = 5;
	v->a[20809] = sym_arithmetic_expansion;
	v->a[20810] = sym_string;
	v->a[20811] = sym_simple_expansion;
	v->a[20812] = sym_expansion;
	v->a[20813] = sym_command_substitution;
	v->a[20814] = actions(676);
	v->a[20815] = 25;
	v->a[20816] = anon_sym_PIPE;
	v->a[20817] = anon_sym_RPAREN;
	v->a[20818] = anon_sym_SEMI_SEMI;
	v->a[20819] = anon_sym_AMP_AMP;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = anon_sym_PIPE_PIPE;
	v->a[20821] = anon_sym_LT;
	v->a[20822] = anon_sym_GT;
	v->a[20823] = anon_sym_GT_GT;
	v->a[20824] = anon_sym_LT_AMP;
	v->a[20825] = anon_sym_GT_AMP;
	v->a[20826] = anon_sym_GT_PIPE;
	v->a[20827] = anon_sym_LT_GT;
	v->a[20828] = anon_sym_LT_LT;
	v->a[20829] = anon_sym_LT_LT_DASH;
	v->a[20830] = aux_sym_heredoc_redirect_token1;
	v->a[20831] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20832] = anon_sym_DOLLAR;
	v->a[20833] = anon_sym_DQUOTE;
	v->a[20834] = sym_raw_string;
	v->a[20835] = sym_number;
	v->a[20836] = anon_sym_DOLLAR_LBRACE;
	v->a[20837] = anon_sym_DOLLAR_LPAREN;
	v->a[20838] = anon_sym_BQUOTE;
	v->a[20839] = sym_word;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = anon_sym_SEMI;
	v->a[20841] = 14;
	v->a[20842] = actions(3);
	v->a[20843] = 1;
	v->a[20844] = sym_comment;
	v->a[20845] = actions(445);
	v->a[20846] = 1;
	v->a[20847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20848] = actions(447);
	v->a[20849] = 1;
	v->a[20850] = anon_sym_DOLLAR;
	v->a[20851] = actions(449);
	v->a[20852] = 1;
	v->a[20853] = anon_sym_DQUOTE;
	v->a[20854] = actions(451);
	v->a[20855] = 1;
	v->a[20856] = anon_sym_DOLLAR_LBRACE;
	v->a[20857] = actions(453);
	v->a[20858] = 1;
	v->a[20859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = actions(455);
	v->a[20861] = 1;
	v->a[20862] = anon_sym_BQUOTE;
	v->a[20863] = actions(457);
	v->a[20864] = 1;
	v->a[20865] = sym__bare_dollar;
	v->a[20866] = state(199);
	v->a[20867] = 1;
	v->a[20868] = aux_sym_command_repeat2;
	v->a[20869] = state(694);
	v->a[20870] = 1;
	v->a[20871] = sym_concatenation;
	v->a[20872] = actions(505);
	v->a[20873] = 2;
	v->a[20874] = sym_file_descriptor;
	v->a[20875] = ts_builtin_sym_end;
	v->a[20876] = actions(443);
	v->a[20877] = 3;
	v->a[20878] = sym_raw_string;
	v->a[20879] = sym_number;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = sym_word;
	v->a[20881] = state(418);
	v->a[20882] = 5;
	v->a[20883] = sym_arithmetic_expansion;
	v->a[20884] = sym_string;
	v->a[20885] = sym_simple_expansion;
	v->a[20886] = sym_expansion;
	v->a[20887] = sym_command_substitution;
	v->a[20888] = actions(503);
	v->a[20889] = 15;
	v->a[20890] = anon_sym_PIPE;
	v->a[20891] = anon_sym_SEMI_SEMI;
	v->a[20892] = anon_sym_AMP_AMP;
	v->a[20893] = anon_sym_PIPE_PIPE;
	v->a[20894] = anon_sym_LT;
	v->a[20895] = anon_sym_GT;
	v->a[20896] = anon_sym_GT_GT;
	v->a[20897] = anon_sym_LT_AMP;
	v->a[20898] = anon_sym_GT_AMP;
	v->a[20899] = anon_sym_GT_PIPE;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */

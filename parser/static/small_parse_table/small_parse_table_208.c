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
	v->a[20800] = 20;
	v->a[20801] = sym_file_descriptor;
	v->a[20802] = sym_variable_name;
	v->a[20803] = sym_test_operator;
	v->a[20804] = sym__brace_start;
	v->a[20805] = anon_sym_PIPE_AMP;
	v->a[20806] = anon_sym_AMP_AMP;
	v->a[20807] = anon_sym_PIPE_PIPE;
	v->a[20808] = anon_sym_GT_GT;
	v->a[20809] = anon_sym_AMP_GT_GT;
	v->a[20810] = anon_sym_GT_PIPE;
	v->a[20811] = anon_sym_LT_AMP_DASH;
	v->a[20812] = anon_sym_GT_AMP_DASH;
	v->a[20813] = anon_sym_LT_LT_DASH;
	v->a[20814] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20815] = sym__special_character;
	v->a[20816] = anon_sym_DQUOTE;
	v->a[20817] = sym_raw_string;
	v->a[20818] = anon_sym_DOLLAR_LBRACE;
	v->a[20819] = anon_sym_BQUOTE;
	small_parse_table_1041(v);
}

void	small_parse_table_1041(t_small_parse_table_array *v)
{
	v->a[20820] = anon_sym_DOLLAR_BQUOTE;
	v->a[20821] = 12;
	v->a[20822] = actions(3);
	v->a[20823] = 1;
	v->a[20824] = sym_comment;
	v->a[20825] = actions(2514);
	v->a[20826] = 1;
	v->a[20827] = anon_sym_RPAREN;
	v->a[20828] = actions(2743);
	v->a[20829] = 1;
	v->a[20830] = aux_sym_heredoc_redirect_token1;
	v->a[20831] = actions(2962);
	v->a[20832] = 1;
	v->a[20833] = sym_variable_name;
	v->a[20834] = actions(2516);
	v->a[20835] = 2;
	v->a[20836] = anon_sym_PIPE;
	v->a[20837] = anon_sym_PIPE_AMP;
	v->a[20838] = actions(2945);
	v->a[20839] = 2;
	small_parse_table_1042(v);
}

void	small_parse_table_1042(t_small_parse_table_array *v)
{
	v->a[20840] = anon_sym_LT_LT;
	v->a[20841] = anon_sym_LT_LT_DASH;
	v->a[20842] = actions(2960);
	v->a[20843] = 2;
	v->a[20844] = anon_sym_AMP_AMP;
	v->a[20845] = anon_sym_PIPE_PIPE;
	v->a[20846] = state(2076);
	v->a[20847] = 2;
	v->a[20848] = sym_variable_assignment;
	v->a[20849] = aux_sym_variable_assignments_repeat1;
	v->a[20850] = actions(2526);
	v->a[20851] = 3;
	v->a[20852] = sym_file_descriptor;
	v->a[20853] = sym_test_operator;
	v->a[20854] = sym__brace_start;
	v->a[20855] = actions(2745);
	v->a[20856] = 3;
	v->a[20857] = anon_sym_SEMI_SEMI;
	v->a[20858] = anon_sym_AMP;
	v->a[20859] = anon_sym_SEMI;
	small_parse_table_1043(v);
}

void	small_parse_table_1043(t_small_parse_table_array *v)
{
	v->a[20860] = state(2109);
	v->a[20861] = 3;
	v->a[20862] = sym_file_redirect;
	v->a[20863] = sym_heredoc_redirect;
	v->a[20864] = aux_sym_redirected_statement_repeat1;
	v->a[20865] = actions(2512);
	v->a[20866] = 22;
	v->a[20867] = anon_sym_LT;
	v->a[20868] = anon_sym_GT;
	v->a[20869] = anon_sym_GT_GT;
	v->a[20870] = anon_sym_AMP_GT;
	v->a[20871] = anon_sym_AMP_GT_GT;
	v->a[20872] = anon_sym_LT_AMP;
	v->a[20873] = anon_sym_GT_AMP;
	v->a[20874] = anon_sym_GT_PIPE;
	v->a[20875] = anon_sym_LT_AMP_DASH;
	v->a[20876] = anon_sym_GT_AMP_DASH;
	v->a[20877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20878] = anon_sym_DOLLAR;
	v->a[20879] = sym__special_character;
	small_parse_table_1044(v);
}

void	small_parse_table_1044(t_small_parse_table_array *v)
{
	v->a[20880] = anon_sym_DQUOTE;
	v->a[20881] = sym_raw_string;
	v->a[20882] = aux_sym_number_token1;
	v->a[20883] = aux_sym_number_token2;
	v->a[20884] = anon_sym_DOLLAR_LBRACE;
	v->a[20885] = anon_sym_DOLLAR_LPAREN;
	v->a[20886] = anon_sym_BQUOTE;
	v->a[20887] = anon_sym_DOLLAR_BQUOTE;
	v->a[20888] = sym_word;
	v->a[20889] = 3;
	v->a[20890] = actions(3);
	v->a[20891] = 1;
	v->a[20892] = sym_comment;
	v->a[20893] = actions(2967);
	v->a[20894] = 6;
	v->a[20895] = sym_file_descriptor;
	v->a[20896] = sym__concat;
	v->a[20897] = sym_variable_name;
	v->a[20898] = sym_test_operator;
	v->a[20899] = sym__brace_start;
	small_parse_table_1045(v);
}

/* EOF small_parse_table_208.c */

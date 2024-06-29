/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_278.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1390(t_small_parse_table_array *v)
{
	v->a[27800] = sym_file_redirect;
	v->a[27801] = sym_heredoc_redirect;
	v->a[27802] = aux_sym_redirected_statement_repeat1;
	v->a[27803] = actions(900);
	v->a[27804] = 8;
	v->a[27805] = anon_sym_SEMI_SEMI;
	v->a[27806] = anon_sym_AMP_AMP;
	v->a[27807] = anon_sym_PIPE_PIPE;
	v->a[27808] = anon_sym_LT_LT;
	v->a[27809] = anon_sym_LT_LT_DASH;
	v->a[27810] = aux_sym_heredoc_redirect_token1;
	v->a[27811] = anon_sym_AMP;
	v->a[27812] = anon_sym_SEMI;
	v->a[27813] = actions(762);
	v->a[27814] = 19;
	v->a[27815] = anon_sym_LT;
	v->a[27816] = anon_sym_GT;
	v->a[27817] = anon_sym_GT_GT;
	v->a[27818] = anon_sym_AMP_GT;
	v->a[27819] = anon_sym_AMP_GT_GT;
	small_parse_table_1391(v);
}

void	small_parse_table_1391(t_small_parse_table_array *v)
{
	v->a[27820] = anon_sym_LT_AMP;
	v->a[27821] = anon_sym_GT_AMP;
	v->a[27822] = anon_sym_GT_PIPE;
	v->a[27823] = anon_sym_LT_AMP_DASH;
	v->a[27824] = anon_sym_GT_AMP_DASH;
	v->a[27825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27826] = anon_sym_DOLLAR;
	v->a[27827] = anon_sym_DQUOTE;
	v->a[27828] = sym_raw_string;
	v->a[27829] = sym_number;
	v->a[27830] = anon_sym_DOLLAR_LBRACE;
	v->a[27831] = anon_sym_DOLLAR_LPAREN;
	v->a[27832] = anon_sym_BQUOTE;
	v->a[27833] = sym_word;
	v->a[27834] = 6;
	v->a[27835] = actions(3);
	v->a[27836] = 1;
	v->a[27837] = sym_comment;
	v->a[27838] = actions(998);
	v->a[27839] = 1;
	small_parse_table_1392(v);
}

void	small_parse_table_1392(t_small_parse_table_array *v)
{
	v->a[27840] = aux_sym_concatenation_token1;
	v->a[27841] = actions(1025);
	v->a[27842] = 1;
	v->a[27843] = sym__concat;
	v->a[27844] = state(286);
	v->a[27845] = 1;
	v->a[27846] = aux_sym_concatenation_repeat1;
	v->a[27847] = actions(961);
	v->a[27848] = 2;
	v->a[27849] = sym_file_descriptor;
	v->a[27850] = sym__bare_dollar;
	v->a[27851] = actions(957);
	v->a[27852] = 30;
	v->a[27853] = anon_sym_esac;
	v->a[27854] = anon_sym_LPAREN;
	v->a[27855] = anon_sym_PIPE;
	v->a[27856] = anon_sym_SEMI_SEMI;
	v->a[27857] = anon_sym_AMP_AMP;
	v->a[27858] = anon_sym_PIPE_PIPE;
	v->a[27859] = anon_sym_LT;
	small_parse_table_1393(v);
}

void	small_parse_table_1393(t_small_parse_table_array *v)
{
	v->a[27860] = anon_sym_GT;
	v->a[27861] = anon_sym_GT_GT;
	v->a[27862] = anon_sym_AMP_GT;
	v->a[27863] = anon_sym_AMP_GT_GT;
	v->a[27864] = anon_sym_LT_AMP;
	v->a[27865] = anon_sym_GT_AMP;
	v->a[27866] = anon_sym_GT_PIPE;
	v->a[27867] = anon_sym_LT_AMP_DASH;
	v->a[27868] = anon_sym_GT_AMP_DASH;
	v->a[27869] = anon_sym_LT_LT;
	v->a[27870] = anon_sym_LT_LT_DASH;
	v->a[27871] = aux_sym_heredoc_redirect_token1;
	v->a[27872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27873] = anon_sym_AMP;
	v->a[27874] = anon_sym_DOLLAR;
	v->a[27875] = anon_sym_DQUOTE;
	v->a[27876] = sym_raw_string;
	v->a[27877] = sym_number;
	v->a[27878] = anon_sym_DOLLAR_LBRACE;
	v->a[27879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1394(v);
}

void	small_parse_table_1394(t_small_parse_table_array *v)
{
	v->a[27880] = anon_sym_BQUOTE;
	v->a[27881] = sym_word;
	v->a[27882] = anon_sym_SEMI;
	v->a[27883] = 8;
	v->a[27884] = actions(3);
	v->a[27885] = 1;
	v->a[27886] = sym_comment;
	v->a[27887] = actions(766);
	v->a[27888] = 1;
	v->a[27889] = anon_sym_PIPE;
	v->a[27890] = actions(774);
	v->a[27891] = 1;
	v->a[27892] = sym_file_descriptor;
	v->a[27893] = actions(844);
	v->a[27894] = 1;
	v->a[27895] = sym_variable_name;
	v->a[27896] = state(1142);
	v->a[27897] = 2;
	v->a[27898] = sym_variable_assignment;
	v->a[27899] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1395(v);
}

/* EOF small_parse_table_278.c */

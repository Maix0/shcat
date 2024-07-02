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
	v->a[27800] = anon_sym_PIPE;
	v->a[27801] = actions(734);
	v->a[27802] = 1;
	v->a[27803] = anon_sym_AMP_AMP;
	v->a[27804] = actions(736);
	v->a[27805] = 1;
	v->a[27806] = anon_sym_PIPE_PIPE;
	v->a[27807] = actions(738);
	v->a[27808] = 1;
	v->a[27809] = anon_sym_QMARK;
	v->a[27810] = actions(740);
	v->a[27811] = 1;
	v->a[27812] = anon_sym_EQ;
	v->a[27813] = actions(1025);
	v->a[27814] = 1;
	v->a[27815] = anon_sym_RPAREN_RPAREN;
	v->a[27816] = actions(664);
	v->a[27817] = 2;
	v->a[27818] = anon_sym_LT;
	v->a[27819] = anon_sym_GT;
	small_parse_table_1391(v);
}

void	small_parse_table_1391(t_small_parse_table_array *v)
{
	v->a[27820] = actions(666);
	v->a[27821] = 2;
	v->a[27822] = anon_sym_GT_GT;
	v->a[27823] = anon_sym_LT_LT;
	v->a[27824] = actions(670);
	v->a[27825] = 2;
	v->a[27826] = anon_sym_EQ_EQ;
	v->a[27827] = anon_sym_BANG_EQ;
	v->a[27828] = actions(672);
	v->a[27829] = 2;
	v->a[27830] = anon_sym_LT_EQ;
	v->a[27831] = anon_sym_GT_EQ;
	v->a[27832] = actions(674);
	v->a[27833] = 2;
	v->a[27834] = anon_sym_PLUS;
	v->a[27835] = anon_sym_DASH;
	v->a[27836] = actions(678);
	v->a[27837] = 2;
	v->a[27838] = anon_sym_PLUS_PLUS2;
	v->a[27839] = anon_sym_DASH_DASH2;
	small_parse_table_1392(v);
}

void	small_parse_table_1392(t_small_parse_table_array *v)
{
	v->a[27840] = actions(676);
	v->a[27841] = 3;
	v->a[27842] = anon_sym_STAR;
	v->a[27843] = anon_sym_SLASH;
	v->a[27844] = anon_sym_PERCENT;
	v->a[27845] = actions(912);
	v->a[27846] = 10;
	v->a[27847] = anon_sym_PLUS_EQ;
	v->a[27848] = anon_sym_DASH_EQ;
	v->a[27849] = anon_sym_STAR_EQ;
	v->a[27850] = anon_sym_SLASH_EQ;
	v->a[27851] = anon_sym_PERCENT_EQ;
	v->a[27852] = anon_sym_LT_LT_EQ;
	v->a[27853] = anon_sym_GT_GT_EQ;
	v->a[27854] = anon_sym_AMP_EQ;
	v->a[27855] = anon_sym_CARET_EQ;
	v->a[27856] = anon_sym_PIPE_EQ;
	v->a[27857] = 8;
	v->a[27858] = actions(3);
	v->a[27859] = 1;
	small_parse_table_1393(v);
}

void	small_parse_table_1393(t_small_parse_table_array *v)
{
	v->a[27860] = sym_comment;
	v->a[27861] = actions(692);
	v->a[27862] = 1;
	v->a[27863] = anon_sym_PIPE;
	v->a[27864] = actions(702);
	v->a[27865] = 1;
	v->a[27866] = sym_file_descriptor;
	v->a[27867] = actions(765);
	v->a[27868] = 1;
	v->a[27869] = sym_variable_name;
	v->a[27870] = state(1048);
	v->a[27871] = 2;
	v->a[27872] = sym_variable_assignment;
	v->a[27873] = aux_sym__variable_assignments_repeat1;
	v->a[27874] = state(1059);
	v->a[27875] = 3;
	v->a[27876] = sym_file_redirect;
	v->a[27877] = sym_heredoc_redirect;
	v->a[27878] = aux_sym_redirected_statement_repeat1;
	v->a[27879] = actions(997);
	small_parse_table_1394(v);
}

void	small_parse_table_1394(t_small_parse_table_array *v)
{
	v->a[27880] = 9;
	v->a[27881] = anon_sym_esac;
	v->a[27882] = anon_sym_SEMI_SEMI;
	v->a[27883] = anon_sym_AMP_AMP;
	v->a[27884] = anon_sym_PIPE_PIPE;
	v->a[27885] = anon_sym_LT_LT;
	v->a[27886] = anon_sym_LT_LT_DASH;
	v->a[27887] = aux_sym_heredoc_redirect_token1;
	v->a[27888] = anon_sym_AMP;
	v->a[27889] = anon_sym_SEMI;
	v->a[27890] = actions(690);
	v->a[27891] = 16;
	v->a[27892] = anon_sym_LT;
	v->a[27893] = anon_sym_GT;
	v->a[27894] = anon_sym_GT_GT;
	v->a[27895] = anon_sym_LT_AMP;
	v->a[27896] = anon_sym_GT_AMP;
	v->a[27897] = anon_sym_GT_PIPE;
	v->a[27898] = anon_sym_LT_GT;
	v->a[27899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1395(v);
}

/* EOF small_parse_table_278.c */

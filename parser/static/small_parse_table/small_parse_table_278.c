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
	v->a[27800] = actions(870);
	v->a[27801] = 1;
	v->a[27802] = sym_comment;
	v->a[27803] = actions(850);
	v->a[27804] = 2;
	v->a[27805] = anon_sym_LT;
	v->a[27806] = anon_sym_GT;
	v->a[27807] = actions(852);
	v->a[27808] = 2;
	v->a[27809] = anon_sym_GT_GT;
	v->a[27810] = anon_sym_LT_LT;
	v->a[27811] = actions(860);
	v->a[27812] = 2;
	v->a[27813] = anon_sym_EQ_EQ;
	v->a[27814] = anon_sym_BANG_EQ;
	v->a[27815] = actions(862);
	v->a[27816] = 2;
	v->a[27817] = anon_sym_LT_EQ;
	v->a[27818] = anon_sym_GT_EQ;
	v->a[27819] = actions(864);
	small_parse_table_1391(v);
}

void	small_parse_table_1391(t_small_parse_table_array *v)
{
	v->a[27820] = 2;
	v->a[27821] = anon_sym_PLUS;
	v->a[27822] = anon_sym_DASH;
	v->a[27823] = actions(868);
	v->a[27824] = 2;
	v->a[27825] = anon_sym_PLUS_PLUS2;
	v->a[27826] = anon_sym_DASH_DASH2;
	v->a[27827] = actions(866);
	v->a[27828] = 3;
	v->a[27829] = anon_sym_STAR;
	v->a[27830] = anon_sym_SLASH;
	v->a[27831] = anon_sym_PERCENT;
	v->a[27832] = actions(872);
	v->a[27833] = 3;
	v->a[27834] = anon_sym_PIPE;
	v->a[27835] = anon_sym_EQ;
	v->a[27836] = anon_sym_CARET;
	v->a[27837] = actions(874);
	v->a[27838] = 15;
	v->a[27839] = anon_sym_AMP_AMP;
	small_parse_table_1392(v);
}

void	small_parse_table_1392(t_small_parse_table_array *v)
{
	v->a[27840] = anon_sym_PIPE_PIPE;
	v->a[27841] = anon_sym_RPAREN_RPAREN;
	v->a[27842] = anon_sym_PLUS_EQ;
	v->a[27843] = anon_sym_DASH_EQ;
	v->a[27844] = anon_sym_STAR_EQ;
	v->a[27845] = anon_sym_SLASH_EQ;
	v->a[27846] = anon_sym_PERCENT_EQ;
	v->a[27847] = anon_sym_LT_LT_EQ;
	v->a[27848] = anon_sym_GT_GT_EQ;
	v->a[27849] = anon_sym_AMP_EQ;
	v->a[27850] = anon_sym_CARET_EQ;
	v->a[27851] = anon_sym_PIPE_EQ;
	v->a[27852] = anon_sym_QMARK;
	v->a[27853] = anon_sym_COLON;
	v->a[27854] = 20;
	v->a[27855] = actions(3);
	v->a[27856] = 1;
	v->a[27857] = sym_comment;
	v->a[27858] = actions(894);
	v->a[27859] = 1;
	small_parse_table_1393(v);
}

void	small_parse_table_1393(t_small_parse_table_array *v)
{
	v->a[27860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27861] = actions(896);
	v->a[27862] = 1;
	v->a[27863] = anon_sym_DOLLAR;
	v->a[27864] = actions(898);
	v->a[27865] = 1;
	v->a[27866] = anon_sym_DQUOTE;
	v->a[27867] = actions(900);
	v->a[27868] = 1;
	v->a[27869] = anon_sym_DOLLAR_LBRACE;
	v->a[27870] = actions(902);
	v->a[27871] = 1;
	v->a[27872] = anon_sym_DOLLAR_LPAREN;
	v->a[27873] = actions(904);
	v->a[27874] = 1;
	v->a[27875] = anon_sym_BQUOTE;
	v->a[27876] = actions(906);
	v->a[27877] = 1;
	v->a[27878] = sym_file_descriptor;
	v->a[27879] = actions(1049);
	small_parse_table_1394(v);
}

void	small_parse_table_1394(t_small_parse_table_array *v)
{
	v->a[27880] = 1;
	v->a[27881] = aux_sym_heredoc_redirect_token1;
	v->a[27882] = state(1496);
	v->a[27883] = 1;
	v->a[27884] = aux_sym__heredoc_command;
	v->a[27885] = state(1937);
	v->a[27886] = 1;
	v->a[27887] = sym_concatenation;
	v->a[27888] = state(2154);
	v->a[27889] = 1;
	v->a[27890] = sym__heredoc_expression;
	v->a[27891] = state(2158);
	v->a[27892] = 1;
	v->a[27893] = sym__heredoc_pipeline;
	v->a[27894] = actions(884);
	v->a[27895] = 2;
	v->a[27896] = anon_sym_PIPE;
	v->a[27897] = anon_sym_PIPE_AMP;
	v->a[27898] = actions(886);
	v->a[27899] = 2;
	small_parse_table_1395(v);
}

/* EOF small_parse_table_278.c */

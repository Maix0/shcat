/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_358.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1790(t_small_parse_table_array *v)
{
	v->a[35800] = state(180);
	v->a[35801] = 1;
	v->a[35802] = sym_command_name;
	v->a[35803] = state(650);
	v->a[35804] = 1;
	v->a[35805] = sym_concatenation;
	v->a[35806] = state(710);
	v->a[35807] = 1;
	v->a[35808] = aux_sym_command_repeat1;
	v->a[35809] = state(714);
	v->a[35810] = 1;
	v->a[35811] = sym_variable_assignment;
	v->a[35812] = state(1216);
	v->a[35813] = 1;
	v->a[35814] = sym_subshell;
	v->a[35815] = state(1220);
	v->a[35816] = 1;
	v->a[35817] = sym_command;
	v->a[35818] = state(1385);
	v->a[35819] = 1;
	small_parse_table_1791(v);
}

void	small_parse_table_1791(t_small_parse_table_array *v)
{
	v->a[35820] = sym_file_redirect;
	v->a[35821] = actions(1254);
	v->a[35822] = 2;
	v->a[35823] = anon_sym_LT_AMP_DASH;
	v->a[35824] = anon_sym_GT_AMP_DASH;
	v->a[35825] = actions(228);
	v->a[35826] = 3;
	v->a[35827] = sym_raw_string;
	v->a[35828] = sym_number;
	v->a[35829] = sym_word;
	v->a[35830] = state(382);
	v->a[35831] = 5;
	v->a[35832] = sym_arithmetic_expansion;
	v->a[35833] = sym_string;
	v->a[35834] = sym_simple_expansion;
	v->a[35835] = sym_expansion;
	v->a[35836] = sym_command_substitution;
	v->a[35837] = actions(1252);
	v->a[35838] = 6;
	v->a[35839] = anon_sym_LT;
	small_parse_table_1792(v);
}

void	small_parse_table_1792(t_small_parse_table_array *v)
{
	v->a[35840] = anon_sym_GT;
	v->a[35841] = anon_sym_GT_GT;
	v->a[35842] = anon_sym_LT_AMP;
	v->a[35843] = anon_sym_GT_AMP;
	v->a[35844] = anon_sym_GT_PIPE;
	v->a[35845] = 6;
	v->a[35846] = actions(3);
	v->a[35847] = 1;
	v->a[35848] = sym_comment;
	v->a[35849] = actions(1236);
	v->a[35850] = 1;
	v->a[35851] = aux_sym_concatenation_token1;
	v->a[35852] = actions(1240);
	v->a[35853] = 1;
	v->a[35854] = sym__concat;
	v->a[35855] = state(463);
	v->a[35856] = 1;
	v->a[35857] = aux_sym_concatenation_repeat1;
	v->a[35858] = actions(1303);
	v->a[35859] = 2;
	small_parse_table_1793(v);
}

void	small_parse_table_1793(t_small_parse_table_array *v)
{
	v->a[35860] = sym_file_descriptor;
	v->a[35861] = sym_variable_name;
	v->a[35862] = actions(1301);
	v->a[35863] = 27;
	v->a[35864] = anon_sym_esac;
	v->a[35865] = anon_sym_PIPE;
	v->a[35866] = anon_sym_SEMI_SEMI;
	v->a[35867] = anon_sym_AMP_AMP;
	v->a[35868] = anon_sym_PIPE_PIPE;
	v->a[35869] = anon_sym_LT;
	v->a[35870] = anon_sym_GT;
	v->a[35871] = anon_sym_GT_GT;
	v->a[35872] = anon_sym_LT_AMP;
	v->a[35873] = anon_sym_GT_AMP;
	v->a[35874] = anon_sym_GT_PIPE;
	v->a[35875] = anon_sym_LT_AMP_DASH;
	v->a[35876] = anon_sym_GT_AMP_DASH;
	v->a[35877] = anon_sym_LT_LT;
	v->a[35878] = anon_sym_LT_LT_DASH;
	v->a[35879] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1794(v);
}

void	small_parse_table_1794(t_small_parse_table_array *v)
{
	v->a[35880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35881] = anon_sym_AMP;
	v->a[35882] = anon_sym_DOLLAR;
	v->a[35883] = anon_sym_DQUOTE;
	v->a[35884] = sym_raw_string;
	v->a[35885] = sym_number;
	v->a[35886] = anon_sym_DOLLAR_LBRACE;
	v->a[35887] = anon_sym_DOLLAR_LPAREN;
	v->a[35888] = anon_sym_BQUOTE;
	v->a[35889] = sym_word;
	v->a[35890] = anon_sym_SEMI;
	v->a[35891] = 6;
	v->a[35892] = actions(3);
	v->a[35893] = 1;
	v->a[35894] = sym_comment;
	v->a[35895] = actions(1236);
	v->a[35896] = 1;
	v->a[35897] = aux_sym_concatenation_token1;
	v->a[35898] = actions(1326);
	v->a[35899] = 1;
	small_parse_table_1795(v);
}

/* EOF small_parse_table_358.c */

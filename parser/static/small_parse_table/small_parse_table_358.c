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
	v->a[35800] = actions(1329);
	v->a[35801] = 1;
	v->a[35802] = sym__concat;
	v->a[35803] = state(358);
	v->a[35804] = 1;
	v->a[35805] = aux_sym_concatenation_repeat1;
	v->a[35806] = actions(997);
	v->a[35807] = 22;
	v->a[35808] = anon_sym_PIPE;
	v->a[35809] = anon_sym_AMP_AMP;
	v->a[35810] = anon_sym_PIPE_PIPE;
	v->a[35811] = anon_sym_LT;
	v->a[35812] = anon_sym_GT;
	v->a[35813] = anon_sym_GT_GT;
	v->a[35814] = anon_sym_LT_AMP;
	v->a[35815] = anon_sym_GT_AMP;
	v->a[35816] = anon_sym_GT_PIPE;
	v->a[35817] = anon_sym_LT_GT;
	v->a[35818] = anon_sym_LT_LT;
	v->a[35819] = anon_sym_LT_LT_DASH;
	small_parse_table_1791(v);
}

void	small_parse_table_1791(t_small_parse_table_array *v)
{
	v->a[35820] = aux_sym_heredoc_redirect_token1;
	v->a[35821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35822] = anon_sym_DOLLAR;
	v->a[35823] = anon_sym_DQUOTE;
	v->a[35824] = sym_raw_string;
	v->a[35825] = sym_number;
	v->a[35826] = anon_sym_DOLLAR_LBRACE;
	v->a[35827] = anon_sym_DOLLAR_LPAREN;
	v->a[35828] = anon_sym_BQUOTE;
	v->a[35829] = sym_word;
	v->a[35830] = 11;
	v->a[35831] = actions(3);
	v->a[35832] = 1;
	v->a[35833] = sym_comment;
	v->a[35834] = actions(930);
	v->a[35835] = 1;
	v->a[35836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35837] = actions(932);
	v->a[35838] = 1;
	v->a[35839] = anon_sym_DOLLAR;
	small_parse_table_1792(v);
}

void	small_parse_table_1792(t_small_parse_table_array *v)
{
	v->a[35840] = actions(934);
	v->a[35841] = 1;
	v->a[35842] = anon_sym_DQUOTE;
	v->a[35843] = actions(936);
	v->a[35844] = 1;
	v->a[35845] = anon_sym_DOLLAR_LBRACE;
	v->a[35846] = actions(938);
	v->a[35847] = 1;
	v->a[35848] = anon_sym_DOLLAR_LPAREN;
	v->a[35849] = actions(940);
	v->a[35850] = 1;
	v->a[35851] = anon_sym_BQUOTE;
	v->a[35852] = state(601);
	v->a[35853] = 2;
	v->a[35854] = sym_concatenation;
	v->a[35855] = aux_sym_for_statement_repeat1;
	v->a[35856] = actions(1331);
	v->a[35857] = 3;
	v->a[35858] = sym_raw_string;
	v->a[35859] = sym_number;
	small_parse_table_1793(v);
}

void	small_parse_table_1793(t_small_parse_table_array *v)
{
	v->a[35860] = sym_word;
	v->a[35861] = state(726);
	v->a[35862] = 5;
	v->a[35863] = sym_arithmetic_expansion;
	v->a[35864] = sym_string;
	v->a[35865] = sym_simple_expansion;
	v->a[35866] = sym_expansion;
	v->a[35867] = sym_command_substitution;
	v->a[35868] = actions(487);
	v->a[35869] = 10;
	v->a[35870] = anon_sym_AMP_AMP;
	v->a[35871] = anon_sym_PIPE_PIPE;
	v->a[35872] = anon_sym_LT;
	v->a[35873] = anon_sym_GT;
	v->a[35874] = anon_sym_GT_GT;
	v->a[35875] = anon_sym_LT_AMP;
	v->a[35876] = anon_sym_GT_AMP;
	v->a[35877] = anon_sym_GT_PIPE;
	v->a[35878] = anon_sym_LT_GT;
	v->a[35879] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1794(v);
}

void	small_parse_table_1794(t_small_parse_table_array *v)
{
	v->a[35880] = 18;
	v->a[35881] = actions(3);
	v->a[35882] = 1;
	v->a[35883] = sym_comment;
	v->a[35884] = actions(1335);
	v->a[35885] = 1;
	v->a[35886] = anon_sym_esac;
	v->a[35887] = actions(1337);
	v->a[35888] = 1;
	v->a[35889] = anon_sym_LPAREN;
	v->a[35890] = actions(1341);
	v->a[35891] = 1;
	v->a[35892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35893] = actions(1343);
	v->a[35894] = 1;
	v->a[35895] = anon_sym_DOLLAR;
	v->a[35896] = actions(1345);
	v->a[35897] = 1;
	v->a[35898] = anon_sym_DQUOTE;
	v->a[35899] = actions(1347);
	small_parse_table_1795(v);
}

/* EOF small_parse_table_358.c */

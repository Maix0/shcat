/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_528.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2640(t_small_parse_table_array *v)
{
	v->a[52800] = sym__case_item_last;
	v->a[52801] = state(1877);
	v->a[52802] = 2;
	v->a[52803] = sym_concatenation;
	v->a[52804] = sym__extglob_blob;
	v->a[52805] = actions(1716);
	v->a[52806] = 3;
	v->a[52807] = sym_raw_string;
	v->a[52808] = sym_number;
	v->a[52809] = sym_word;
	v->a[52810] = state(1772);
	v->a[52811] = 5;
	v->a[52812] = sym_arithmetic_expansion;
	v->a[52813] = sym_string;
	v->a[52814] = sym_simple_expansion;
	v->a[52815] = sym_expansion;
	v->a[52816] = sym_command_substitution;
	v->a[52817] = 3;
	v->a[52818] = actions(3);
	v->a[52819] = 1;
	small_parse_table_2641(v);
}

void	small_parse_table_2641(t_small_parse_table_array *v)
{
	v->a[52820] = sym_comment;
	v->a[52821] = actions(515);
	v->a[52822] = 5;
	v->a[52823] = sym_file_descriptor;
	v->a[52824] = sym__concat;
	v->a[52825] = sym_variable_name;
	v->a[52826] = ts_builtin_sym_end;
	v->a[52827] = aux_sym_heredoc_redirect_token1;
	v->a[52828] = actions(513);
	v->a[52829] = 17;
	v->a[52830] = anon_sym_PIPE;
	v->a[52831] = anon_sym_RPAREN;
	v->a[52832] = anon_sym_SEMI_SEMI;
	v->a[52833] = anon_sym_AMP_AMP;
	v->a[52834] = anon_sym_PIPE_PIPE;
	v->a[52835] = anon_sym_LT;
	v->a[52836] = anon_sym_GT;
	v->a[52837] = anon_sym_GT_GT;
	v->a[52838] = anon_sym_LT_AMP;
	v->a[52839] = anon_sym_GT_AMP;
	small_parse_table_2642(v);
}

void	small_parse_table_2642(t_small_parse_table_array *v)
{
	v->a[52840] = anon_sym_GT_PIPE;
	v->a[52841] = anon_sym_LT_GT;
	v->a[52842] = anon_sym_LT_LT;
	v->a[52843] = anon_sym_LT_LT_DASH;
	v->a[52844] = aux_sym_concatenation_token1;
	v->a[52845] = anon_sym_BQUOTE;
	v->a[52846] = anon_sym_SEMI;
	v->a[52847] = 3;
	v->a[52848] = actions(3);
	v->a[52849] = 1;
	v->a[52850] = sym_comment;
	v->a[52851] = actions(523);
	v->a[52852] = 5;
	v->a[52853] = sym_file_descriptor;
	v->a[52854] = sym__concat;
	v->a[52855] = sym_variable_name;
	v->a[52856] = ts_builtin_sym_end;
	v->a[52857] = aux_sym_heredoc_redirect_token1;
	v->a[52858] = actions(521);
	v->a[52859] = 17;
	small_parse_table_2643(v);
}

void	small_parse_table_2643(t_small_parse_table_array *v)
{
	v->a[52860] = anon_sym_PIPE;
	v->a[52861] = anon_sym_RPAREN;
	v->a[52862] = anon_sym_SEMI_SEMI;
	v->a[52863] = anon_sym_AMP_AMP;
	v->a[52864] = anon_sym_PIPE_PIPE;
	v->a[52865] = anon_sym_LT;
	v->a[52866] = anon_sym_GT;
	v->a[52867] = anon_sym_GT_GT;
	v->a[52868] = anon_sym_LT_AMP;
	v->a[52869] = anon_sym_GT_AMP;
	v->a[52870] = anon_sym_GT_PIPE;
	v->a[52871] = anon_sym_LT_GT;
	v->a[52872] = anon_sym_LT_LT;
	v->a[52873] = anon_sym_LT_LT_DASH;
	v->a[52874] = aux_sym_concatenation_token1;
	v->a[52875] = anon_sym_BQUOTE;
	v->a[52876] = anon_sym_SEMI;
	v->a[52877] = 16;
	v->a[52878] = actions(3);
	v->a[52879] = 1;
	small_parse_table_2644(v);
}

void	small_parse_table_2644(t_small_parse_table_array *v)
{
	v->a[52880] = sym_comment;
	v->a[52881] = actions(1720);
	v->a[52882] = 1;
	v->a[52883] = anon_sym_LPAREN;
	v->a[52884] = actions(1724);
	v->a[52885] = 1;
	v->a[52886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52887] = actions(1726);
	v->a[52888] = 1;
	v->a[52889] = anon_sym_DOLLAR;
	v->a[52890] = actions(1728);
	v->a[52891] = 1;
	v->a[52892] = anon_sym_DQUOTE;
	v->a[52893] = actions(1730);
	v->a[52894] = 1;
	v->a[52895] = anon_sym_DOLLAR_LBRACE;
	v->a[52896] = actions(1732);
	v->a[52897] = 1;
	v->a[52898] = anon_sym_DOLLAR_LPAREN;
	v->a[52899] = actions(1734);
	small_parse_table_2645(v);
}

/* EOF small_parse_table_528.c */

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
	v->a[52800] = state(1209);
	v->a[52801] = 1;
	v->a[52802] = aux_sym__literal_repeat1;
	v->a[52803] = actions(278);
	v->a[52804] = 6;
	v->a[52805] = sym_file_descriptor;
	v->a[52806] = sym_test_operator;
	v->a[52807] = sym__bare_dollar;
	v->a[52808] = sym__brace_start;
	v->a[52809] = ts_builtin_sym_end;
	v->a[52810] = aux_sym_heredoc_redirect_token1;
	v->a[52811] = actions(241);
	v->a[52812] = 39;
	v->a[52813] = anon_sym_LPAREN_LPAREN;
	v->a[52814] = anon_sym_SEMI;
	v->a[52815] = anon_sym_PIPE_PIPE;
	v->a[52816] = anon_sym_AMP_AMP;
	v->a[52817] = anon_sym_PIPE;
	v->a[52818] = anon_sym_AMP;
	v->a[52819] = anon_sym_EQ_EQ;
	small_parse_table_2641(v);
}

void	small_parse_table_2641(t_small_parse_table_array *v)
{
	v->a[52820] = anon_sym_LT;
	v->a[52821] = anon_sym_GT;
	v->a[52822] = anon_sym_LT_LT;
	v->a[52823] = anon_sym_GT_GT;
	v->a[52824] = anon_sym_LPAREN;
	v->a[52825] = anon_sym_SEMI_SEMI;
	v->a[52826] = anon_sym_PIPE_AMP;
	v->a[52827] = anon_sym_EQ_TILDE;
	v->a[52828] = anon_sym_AMP_GT;
	v->a[52829] = anon_sym_AMP_GT_GT;
	v->a[52830] = anon_sym_LT_AMP;
	v->a[52831] = anon_sym_GT_AMP;
	v->a[52832] = anon_sym_GT_PIPE;
	v->a[52833] = anon_sym_LT_AMP_DASH;
	v->a[52834] = anon_sym_GT_AMP_DASH;
	v->a[52835] = anon_sym_LT_LT_DASH;
	v->a[52836] = anon_sym_LT_LT_LT;
	v->a[52837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52838] = anon_sym_DOLLAR_LBRACK;
	v->a[52839] = anon_sym_DOLLAR;
	small_parse_table_2642(v);
}

void	small_parse_table_2642(t_small_parse_table_array *v)
{
	v->a[52840] = anon_sym_DQUOTE;
	v->a[52841] = sym_raw_string;
	v->a[52842] = sym_ansi_c_string;
	v->a[52843] = aux_sym_number_token1;
	v->a[52844] = aux_sym_number_token2;
	v->a[52845] = anon_sym_DOLLAR_LBRACE;
	v->a[52846] = anon_sym_DOLLAR_LPAREN;
	v->a[52847] = anon_sym_BQUOTE;
	v->a[52848] = anon_sym_DOLLAR_BQUOTE;
	v->a[52849] = anon_sym_LT_LPAREN;
	v->a[52850] = anon_sym_GT_LPAREN;
	v->a[52851] = sym_word;
	v->a[52852] = 3;
	v->a[52853] = actions(3);
	v->a[52854] = 1;
	v->a[52855] = sym_comment;
	v->a[52856] = actions(1350);
	v->a[52857] = 6;
	v->a[52858] = sym_file_descriptor;
	v->a[52859] = sym__concat;
	small_parse_table_2643(v);
}

void	small_parse_table_2643(t_small_parse_table_array *v)
{
	v->a[52860] = sym_variable_name;
	v->a[52861] = sym_test_operator;
	v->a[52862] = sym__brace_start;
	v->a[52863] = aux_sym_heredoc_redirect_token1;
	v->a[52864] = actions(1348);
	v->a[52865] = 41;
	v->a[52866] = anon_sym_LPAREN_LPAREN;
	v->a[52867] = anon_sym_SEMI;
	v->a[52868] = anon_sym_PIPE_PIPE;
	v->a[52869] = anon_sym_AMP_AMP;
	v->a[52870] = anon_sym_PIPE;
	v->a[52871] = anon_sym_AMP;
	v->a[52872] = anon_sym_LT;
	v->a[52873] = anon_sym_GT;
	v->a[52874] = anon_sym_LT_LT;
	v->a[52875] = anon_sym_GT_GT;
	v->a[52876] = anon_sym_esac;
	v->a[52877] = anon_sym_SEMI_SEMI;
	v->a[52878] = anon_sym_SEMI_AMP;
	v->a[52879] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_2644(v);
}

void	small_parse_table_2644(t_small_parse_table_array *v)
{
	v->a[52880] = anon_sym_PIPE_AMP;
	v->a[52881] = anon_sym_AMP_GT;
	v->a[52882] = anon_sym_AMP_GT_GT;
	v->a[52883] = anon_sym_LT_AMP;
	v->a[52884] = anon_sym_GT_AMP;
	v->a[52885] = anon_sym_GT_PIPE;
	v->a[52886] = anon_sym_LT_AMP_DASH;
	v->a[52887] = anon_sym_GT_AMP_DASH;
	v->a[52888] = anon_sym_LT_LT_DASH;
	v->a[52889] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52890] = anon_sym_DOLLAR_LBRACK;
	v->a[52891] = aux_sym_concatenation_token1;
	v->a[52892] = anon_sym_DOLLAR;
	v->a[52893] = sym__special_character;
	v->a[52894] = anon_sym_DQUOTE;
	v->a[52895] = sym_raw_string;
	v->a[52896] = sym_ansi_c_string;
	v->a[52897] = aux_sym_number_token1;
	v->a[52898] = aux_sym_number_token2;
	v->a[52899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2645(v);
}

/* EOF small_parse_table_528.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_578.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2890(t_small_parse_table_array *v)
{
	v->a[57800] = sym_test_operator;
	v->a[57801] = sym__brace_start;
	v->a[57802] = actions(3627);
	v->a[57803] = 9;
	v->a[57804] = anon_sym_PIPE;
	v->a[57805] = anon_sym_SEMI_SEMI;
	v->a[57806] = anon_sym_PIPE_AMP;
	v->a[57807] = anon_sym_AMP_AMP;
	v->a[57808] = anon_sym_PIPE_PIPE;
	v->a[57809] = anon_sym_LT_LT;
	v->a[57810] = anon_sym_LT_LT_DASH;
	v->a[57811] = anon_sym_AMP;
	v->a[57812] = anon_sym_SEMI;
	v->a[57813] = actions(3629);
	v->a[57814] = 10;
	v->a[57815] = anon_sym_LT;
	v->a[57816] = anon_sym_GT;
	v->a[57817] = anon_sym_GT_GT;
	v->a[57818] = anon_sym_AMP_GT;
	v->a[57819] = anon_sym_AMP_GT_GT;
	small_parse_table_2891(v);
}

void	small_parse_table_2891(t_small_parse_table_array *v)
{
	v->a[57820] = anon_sym_LT_AMP;
	v->a[57821] = anon_sym_GT_AMP;
	v->a[57822] = anon_sym_GT_PIPE;
	v->a[57823] = anon_sym_LT_AMP_DASH;
	v->a[57824] = anon_sym_GT_AMP_DASH;
	v->a[57825] = actions(3625);
	v->a[57826] = 12;
	v->a[57827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57828] = anon_sym_DOLLAR;
	v->a[57829] = sym__special_character;
	v->a[57830] = anon_sym_DQUOTE;
	v->a[57831] = sym_raw_string;
	v->a[57832] = aux_sym_number_token1;
	v->a[57833] = aux_sym_number_token2;
	v->a[57834] = anon_sym_DOLLAR_LBRACE;
	v->a[57835] = anon_sym_DOLLAR_LPAREN;
	v->a[57836] = anon_sym_BQUOTE;
	v->a[57837] = anon_sym_DOLLAR_BQUOTE;
	v->a[57838] = sym_word;
	v->a[57839] = 3;
	small_parse_table_2892(v);
}

void	small_parse_table_2892(t_small_parse_table_array *v)
{
	v->a[57840] = actions(3);
	v->a[57841] = 1;
	v->a[57842] = sym_comment;
	v->a[57843] = actions(2664);
	v->a[57844] = 6;
	v->a[57845] = sym_file_descriptor;
	v->a[57846] = sym_variable_name;
	v->a[57847] = sym_test_operator;
	v->a[57848] = sym__brace_start;
	v->a[57849] = ts_builtin_sym_end;
	v->a[57850] = aux_sym_heredoc_redirect_token1;
	v->a[57851] = actions(2662);
	v->a[57852] = 31;
	v->a[57853] = anon_sym_PIPE;
	v->a[57854] = anon_sym_SEMI_SEMI;
	v->a[57855] = anon_sym_PIPE_AMP;
	v->a[57856] = anon_sym_AMP_AMP;
	v->a[57857] = anon_sym_PIPE_PIPE;
	v->a[57858] = anon_sym_LT;
	v->a[57859] = anon_sym_GT;
	small_parse_table_2893(v);
}

void	small_parse_table_2893(t_small_parse_table_array *v)
{
	v->a[57860] = anon_sym_GT_GT;
	v->a[57861] = anon_sym_AMP_GT;
	v->a[57862] = anon_sym_AMP_GT_GT;
	v->a[57863] = anon_sym_LT_AMP;
	v->a[57864] = anon_sym_GT_AMP;
	v->a[57865] = anon_sym_GT_PIPE;
	v->a[57866] = anon_sym_LT_AMP_DASH;
	v->a[57867] = anon_sym_GT_AMP_DASH;
	v->a[57868] = anon_sym_LT_LT;
	v->a[57869] = anon_sym_LT_LT_DASH;
	v->a[57870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57871] = anon_sym_AMP;
	v->a[57872] = anon_sym_DOLLAR;
	v->a[57873] = sym__special_character;
	v->a[57874] = anon_sym_DQUOTE;
	v->a[57875] = sym_raw_string;
	v->a[57876] = aux_sym_number_token1;
	v->a[57877] = aux_sym_number_token2;
	v->a[57878] = anon_sym_DOLLAR_LBRACE;
	v->a[57879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2894(v);
}

void	small_parse_table_2894(t_small_parse_table_array *v)
{
	v->a[57880] = anon_sym_BQUOTE;
	v->a[57881] = anon_sym_DOLLAR_BQUOTE;
	v->a[57882] = sym_word;
	v->a[57883] = anon_sym_SEMI;
	v->a[57884] = 3;
	v->a[57885] = actions(3);
	v->a[57886] = 1;
	v->a[57887] = sym_comment;
	v->a[57888] = actions(1390);
	v->a[57889] = 6;
	v->a[57890] = sym_file_descriptor;
	v->a[57891] = sym_variable_name;
	v->a[57892] = sym_test_operator;
	v->a[57893] = sym__brace_start;
	v->a[57894] = ts_builtin_sym_end;
	v->a[57895] = aux_sym_heredoc_redirect_token1;
	v->a[57896] = actions(1388);
	v->a[57897] = 31;
	v->a[57898] = anon_sym_PIPE;
	v->a[57899] = anon_sym_SEMI_SEMI;
	small_parse_table_2895(v);
}

/* EOF small_parse_table_578.c */

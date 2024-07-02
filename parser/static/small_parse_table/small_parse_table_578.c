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
	v->a[57800] = sym_case_item;
	v->a[57801] = state(2019);
	v->a[57802] = 1;
	v->a[57803] = sym__case_item_last;
	v->a[57804] = state(1873);
	v->a[57805] = 2;
	v->a[57806] = sym_concatenation;
	v->a[57807] = sym__extglob_blob;
	v->a[57808] = actions(1633);
	v->a[57809] = 3;
	v->a[57810] = sym_raw_string;
	v->a[57811] = sym_number;
	v->a[57812] = sym_word;
	v->a[57813] = state(1806);
	v->a[57814] = 5;
	v->a[57815] = sym_arithmetic_expansion;
	v->a[57816] = sym_string;
	v->a[57817] = sym_simple_expansion;
	v->a[57818] = sym_expansion;
	v->a[57819] = sym_command_substitution;
	small_parse_table_2891(v);
}

void	small_parse_table_2891(t_small_parse_table_array *v)
{
	v->a[57820] = 3;
	v->a[57821] = actions(3);
	v->a[57822] = 1;
	v->a[57823] = sym_comment;
	v->a[57824] = actions(1158);
	v->a[57825] = 4;
	v->a[57826] = sym_file_descriptor;
	v->a[57827] = sym_variable_name;
	v->a[57828] = ts_builtin_sym_end;
	v->a[57829] = aux_sym_heredoc_redirect_token1;
	v->a[57830] = actions(1154);
	v->a[57831] = 17;
	v->a[57832] = anon_sym_PIPE;
	v->a[57833] = anon_sym_RPAREN;
	v->a[57834] = anon_sym_SEMI_SEMI;
	v->a[57835] = anon_sym_AMP_AMP;
	v->a[57836] = anon_sym_PIPE_PIPE;
	v->a[57837] = anon_sym_LT;
	v->a[57838] = anon_sym_GT;
	v->a[57839] = anon_sym_GT_GT;
	small_parse_table_2892(v);
}

void	small_parse_table_2892(t_small_parse_table_array *v)
{
	v->a[57840] = anon_sym_LT_AMP;
	v->a[57841] = anon_sym_GT_AMP;
	v->a[57842] = anon_sym_GT_PIPE;
	v->a[57843] = anon_sym_LT_GT;
	v->a[57844] = anon_sym_LT_LT;
	v->a[57845] = anon_sym_LT_LT_DASH;
	v->a[57846] = anon_sym_AMP;
	v->a[57847] = anon_sym_BQUOTE;
	v->a[57848] = anon_sym_SEMI;
	v->a[57849] = 12;
	v->a[57850] = actions(3);
	v->a[57851] = 1;
	v->a[57852] = sym_comment;
	v->a[57853] = actions(1067);
	v->a[57854] = 1;
	v->a[57855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57856] = actions(1069);
	v->a[57857] = 1;
	v->a[57858] = anon_sym_DOLLAR;
	v->a[57859] = actions(1071);
	small_parse_table_2893(v);
}

void	small_parse_table_2893(t_small_parse_table_array *v)
{
	v->a[57860] = 1;
	v->a[57861] = anon_sym_DQUOTE;
	v->a[57862] = actions(1073);
	v->a[57863] = 1;
	v->a[57864] = anon_sym_DOLLAR_LBRACE;
	v->a[57865] = actions(1075);
	v->a[57866] = 1;
	v->a[57867] = anon_sym_DOLLAR_LPAREN;
	v->a[57868] = actions(1077);
	v->a[57869] = 1;
	v->a[57870] = anon_sym_BQUOTE;
	v->a[57871] = state(1926);
	v->a[57872] = 1;
	v->a[57873] = sym_terminator;
	v->a[57874] = state(1192);
	v->a[57875] = 2;
	v->a[57876] = sym_concatenation;
	v->a[57877] = aux_sym_for_statement_repeat1;
	v->a[57878] = actions(1964);
	v->a[57879] = 3;
	small_parse_table_2894(v);
}

void	small_parse_table_2894(t_small_parse_table_array *v)
{
	v->a[57880] = sym_raw_string;
	v->a[57881] = sym_number;
	v->a[57882] = sym_word;
	v->a[57883] = actions(1966);
	v->a[57884] = 4;
	v->a[57885] = anon_sym_SEMI_SEMI;
	v->a[57886] = aux_sym_heredoc_redirect_token1;
	v->a[57887] = anon_sym_AMP;
	v->a[57888] = anon_sym_SEMI;
	v->a[57889] = state(1412);
	v->a[57890] = 5;
	v->a[57891] = sym_arithmetic_expansion;
	v->a[57892] = sym_string;
	v->a[57893] = sym_simple_expansion;
	v->a[57894] = sym_expansion;
	v->a[57895] = sym_command_substitution;
	v->a[57896] = 7;
	v->a[57897] = actions(3);
	v->a[57898] = 1;
	v->a[57899] = sym_comment;
	small_parse_table_2895(v);
}

/* EOF small_parse_table_578.c */

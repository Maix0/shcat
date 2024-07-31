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
	v->a[57800] = 1;
	v->a[57801] = anon_sym_BQUOTE;
	v->a[57802] = actions(2315);
	v->a[57803] = 1;
	v->a[57804] = anon_sym_RBRACE;
	v->a[57805] = actions(2317);
	v->a[57806] = 1;
	v->a[57807] = sym_raw_string;
	v->a[57808] = actions(2319);
	v->a[57809] = 1;
	v->a[57810] = aux_sym__word_no_brace_token1;
	v->a[57811] = actions(2321);
	v->a[57812] = 1;
	v->a[57813] = sym_variable_name;
	v->a[57814] = actions(2323);
	v->a[57815] = 1;
	v->a[57816] = sym__expansion_word;
	v->a[57817] = state(1565);
	v->a[57818] = 1;
	v->a[57819] = sym__word_no_brace;
	small_parse_table_2891(v);
}

void	small_parse_table_2891(t_small_parse_table_array *v)
{
	v->a[57820] = state(1723);
	v->a[57821] = 1;
	v->a[57822] = sym__concatenation_in_expansion;
	v->a[57823] = state(1564);
	v->a[57824] = 2;
	v->a[57825] = sym_string;
	v->a[57826] = sym_expansion;
	v->a[57827] = state(1573);
	v->a[57828] = 2;
	v->a[57829] = sym_simple_expansion;
	v->a[57830] = sym_command_substitution;
	v->a[57831] = 3;
	v->a[57832] = actions(3);
	v->a[57833] = 1;
	v->a[57834] = sym_comment;
	v->a[57835] = actions(1873);
	v->a[57836] = 1;
	v->a[57837] = aux_sym_heredoc_redirect_token1;
	v->a[57838] = actions(1875);
	v->a[57839] = 15;
	small_parse_table_2892(v);
}

void	small_parse_table_2892(t_small_parse_table_array *v)
{
	v->a[57840] = anon_sym_esac;
	v->a[57841] = anon_sym_PIPE;
	v->a[57842] = anon_sym_SEMI_SEMI;
	v->a[57843] = anon_sym_AMP_AMP;
	v->a[57844] = anon_sym_PIPE_PIPE;
	v->a[57845] = anon_sym_LT;
	v->a[57846] = anon_sym_GT;
	v->a[57847] = anon_sym_GT_GT;
	v->a[57848] = anon_sym_LT_AMP;
	v->a[57849] = anon_sym_GT_AMP;
	v->a[57850] = anon_sym_GT_PIPE;
	v->a[57851] = anon_sym_LT_GT;
	v->a[57852] = anon_sym_LT_LT;
	v->a[57853] = anon_sym_LT_LT_DASH;
	v->a[57854] = anon_sym_SEMI;
	v->a[57855] = 10;
	v->a[57856] = actions(3);
	v->a[57857] = 1;
	v->a[57858] = sym_comment;
	v->a[57859] = actions(886);
	small_parse_table_2893(v);
}

void	small_parse_table_2893(t_small_parse_table_array *v)
{
	v->a[57860] = 1;
	v->a[57861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57862] = actions(888);
	v->a[57863] = 1;
	v->a[57864] = anon_sym_DOLLAR;
	v->a[57865] = actions(890);
	v->a[57866] = 1;
	v->a[57867] = anon_sym_DQUOTE;
	v->a[57868] = actions(892);
	v->a[57869] = 1;
	v->a[57870] = anon_sym_DOLLAR_LBRACE;
	v->a[57871] = actions(894);
	v->a[57872] = 1;
	v->a[57873] = anon_sym_DOLLAR_LPAREN;
	v->a[57874] = actions(896);
	v->a[57875] = 1;
	v->a[57876] = anon_sym_BQUOTE;
	v->a[57877] = state(293);
	v->a[57878] = 2;
	v->a[57879] = sym_concatenation;
	small_parse_table_2894(v);
}

void	small_parse_table_2894(t_small_parse_table_array *v)
{
	v->a[57880] = aux_sym_for_statement_repeat1;
	v->a[57881] = actions(944);
	v->a[57882] = 3;
	v->a[57883] = sym_raw_string;
	v->a[57884] = sym_number;
	v->a[57885] = sym_word;
	v->a[57886] = state(512);
	v->a[57887] = 5;
	v->a[57888] = sym_arithmetic_expansion;
	v->a[57889] = sym_string;
	v->a[57890] = sym_simple_expansion;
	v->a[57891] = sym_expansion;
	v->a[57892] = sym_command_substitution;
	v->a[57893] = 10;
	v->a[57894] = actions(3);
	v->a[57895] = 1;
	v->a[57896] = sym_comment;
	v->a[57897] = actions(1151);
	v->a[57898] = 1;
	v->a[57899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2895(v);
}

/* EOF small_parse_table_578.c */

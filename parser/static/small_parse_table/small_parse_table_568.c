/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_568.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2840(t_small_parse_table_array *v)
{
	v->a[56800] = 1;
	v->a[56801] = sym_comment;
	v->a[56802] = actions(1118);
	v->a[56803] = 2;
	v->a[56804] = sym_file_descriptor;
	v->a[56805] = sym__concat;
	v->a[56806] = actions(1116);
	v->a[56807] = 25;
	v->a[56808] = anon_sym_PIPE;
	v->a[56809] = anon_sym_AMP_AMP;
	v->a[56810] = anon_sym_PIPE_PIPE;
	v->a[56811] = anon_sym_LT;
	v->a[56812] = anon_sym_GT;
	v->a[56813] = anon_sym_GT_GT;
	v->a[56814] = anon_sym_AMP_GT;
	v->a[56815] = anon_sym_AMP_GT_GT;
	v->a[56816] = anon_sym_LT_AMP;
	v->a[56817] = anon_sym_GT_AMP;
	v->a[56818] = anon_sym_GT_PIPE;
	v->a[56819] = anon_sym_LT_AMP_DASH;
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = anon_sym_GT_AMP_DASH;
	v->a[56821] = anon_sym_LT_LT;
	v->a[56822] = anon_sym_LT_LT_DASH;
	v->a[56823] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56824] = aux_sym_concatenation_token1;
	v->a[56825] = anon_sym_DOLLAR;
	v->a[56826] = anon_sym_DQUOTE;
	v->a[56827] = sym_raw_string;
	v->a[56828] = sym_number;
	v->a[56829] = anon_sym_DOLLAR_LBRACE;
	v->a[56830] = anon_sym_DOLLAR_LPAREN;
	v->a[56831] = anon_sym_BQUOTE;
	v->a[56832] = sym_word;
	v->a[56833] = 18;
	v->a[56834] = actions(3);
	v->a[56835] = 1;
	v->a[56836] = sym_comment;
	v->a[56837] = actions(1879);
	v->a[56838] = 1;
	v->a[56839] = anon_sym_LPAREN;
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = actions(1883);
	v->a[56841] = 1;
	v->a[56842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56843] = actions(1885);
	v->a[56844] = 1;
	v->a[56845] = anon_sym_DOLLAR;
	v->a[56846] = actions(1887);
	v->a[56847] = 1;
	v->a[56848] = anon_sym_DQUOTE;
	v->a[56849] = actions(1889);
	v->a[56850] = 1;
	v->a[56851] = anon_sym_DOLLAR_LBRACE;
	v->a[56852] = actions(1891);
	v->a[56853] = 1;
	v->a[56854] = anon_sym_DOLLAR_LPAREN;
	v->a[56855] = actions(1893);
	v->a[56856] = 1;
	v->a[56857] = anon_sym_BQUOTE;
	v->a[56858] = actions(1895);
	v->a[56859] = 1;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = sym_extglob_pattern;
	v->a[56861] = actions(1929);
	v->a[56862] = 1;
	v->a[56863] = anon_sym_esac;
	v->a[56864] = state(1308);
	v->a[56865] = 1;
	v->a[56866] = sym_terminator;
	v->a[56867] = state(1338);
	v->a[56868] = 1;
	v->a[56869] = aux_sym_case_statement_repeat1;
	v->a[56870] = state(1923);
	v->a[56871] = 1;
	v->a[56872] = sym_case_item;
	v->a[56873] = state(2287);
	v->a[56874] = 1;
	v->a[56875] = sym__case_item_last;
	v->a[56876] = state(2078);
	v->a[56877] = 2;
	v->a[56878] = sym_concatenation;
	v->a[56879] = sym__extglob_blob;
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = actions(1875);
	v->a[56881] = 3;
	v->a[56882] = sym_raw_string;
	v->a[56883] = sym_number;
	v->a[56884] = sym_word;
	v->a[56885] = actions(1881);
	v->a[56886] = 4;
	v->a[56887] = anon_sym_SEMI_SEMI;
	v->a[56888] = aux_sym_heredoc_redirect_token1;
	v->a[56889] = anon_sym_AMP;
	v->a[56890] = anon_sym_SEMI;
	v->a[56891] = state(2004);
	v->a[56892] = 5;
	v->a[56893] = sym_arithmetic_expansion;
	v->a[56894] = sym_string;
	v->a[56895] = sym_simple_expansion;
	v->a[56896] = sym_expansion;
	v->a[56897] = sym_command_substitution;
	v->a[56898] = 16;
	v->a[56899] = actions(1074);
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */

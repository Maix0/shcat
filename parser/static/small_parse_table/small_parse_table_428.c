/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = anon_sym_DQUOTE;
	v->a[42801] = actions(63);
	v->a[42802] = 1;
	v->a[42803] = anon_sym_DOLLAR_LBRACE;
	v->a[42804] = actions(65);
	v->a[42805] = 1;
	v->a[42806] = anon_sym_DOLLAR_LPAREN;
	v->a[42807] = actions(67);
	v->a[42808] = 1;
	v->a[42809] = anon_sym_BQUOTE;
	v->a[42810] = actions(359);
	v->a[42811] = 1;
	v->a[42812] = sym_variable_name;
	v->a[42813] = actions(1164);
	v->a[42814] = 1;
	v->a[42815] = sym_file_descriptor;
	v->a[42816] = state(180);
	v->a[42817] = 1;
	v->a[42818] = sym_command_name;
	v->a[42819] = state(584);
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = 1;
	v->a[42821] = sym_concatenation;
	v->a[42822] = state(1218);
	v->a[42823] = 1;
	v->a[42824] = sym_file_redirect;
	v->a[42825] = state(1055);
	v->a[42826] = 2;
	v->a[42827] = sym_variable_assignment;
	v->a[42828] = aux_sym_command_repeat1;
	v->a[42829] = actions(61);
	v->a[42830] = 3;
	v->a[42831] = sym_raw_string;
	v->a[42832] = sym_number;
	v->a[42833] = sym_word;
	v->a[42834] = state(433);
	v->a[42835] = 5;
	v->a[42836] = sym_arithmetic_expansion;
	v->a[42837] = sym_string;
	v->a[42838] = sym_simple_expansion;
	v->a[42839] = sym_expansion;
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = sym_command_substitution;
	v->a[42841] = actions(1162);
	v->a[42842] = 7;
	v->a[42843] = anon_sym_LT;
	v->a[42844] = anon_sym_GT;
	v->a[42845] = anon_sym_GT_GT;
	v->a[42846] = anon_sym_LT_AMP;
	v->a[42847] = anon_sym_GT_AMP;
	v->a[42848] = anon_sym_GT_PIPE;
	v->a[42849] = anon_sym_LT_GT;
	v->a[42850] = 7;
	v->a[42851] = actions(3);
	v->a[42852] = 1;
	v->a[42853] = sym_comment;
	v->a[42854] = actions(1435);
	v->a[42855] = 1;
	v->a[42856] = sym_file_descriptor;
	v->a[42857] = actions(1438);
	v->a[42858] = 1;
	v->a[42859] = sym_variable_name;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = actions(1504);
	v->a[42861] = 1;
	v->a[42862] = anon_sym_RPAREN;
	v->a[42863] = actions(1432);
	v->a[42864] = 7;
	v->a[42865] = anon_sym_LT;
	v->a[42866] = anon_sym_GT;
	v->a[42867] = anon_sym_GT_GT;
	v->a[42868] = anon_sym_LT_AMP;
	v->a[42869] = anon_sym_GT_AMP;
	v->a[42870] = anon_sym_GT_PIPE;
	v->a[42871] = anon_sym_LT_GT;
	v->a[42872] = actions(1428);
	v->a[42873] = 9;
	v->a[42874] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42875] = anon_sym_DOLLAR;
	v->a[42876] = anon_sym_DQUOTE;
	v->a[42877] = sym_raw_string;
	v->a[42878] = sym_number;
	v->a[42879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = anon_sym_DOLLAR_LPAREN;
	v->a[42881] = anon_sym_BQUOTE;
	v->a[42882] = sym_word;
	v->a[42883] = actions(1430);
	v->a[42884] = 9;
	v->a[42885] = anon_sym_PIPE;
	v->a[42886] = anon_sym_SEMI_SEMI;
	v->a[42887] = anon_sym_AMP_AMP;
	v->a[42888] = anon_sym_PIPE_PIPE;
	v->a[42889] = anon_sym_LT_LT;
	v->a[42890] = anon_sym_LT_LT_DASH;
	v->a[42891] = aux_sym_heredoc_redirect_token1;
	v->a[42892] = anon_sym_AMP;
	v->a[42893] = anon_sym_SEMI;
	v->a[42894] = 7;
	v->a[42895] = actions(3);
	v->a[42896] = 1;
	v->a[42897] = sym_comment;
	v->a[42898] = actions(1435);
	v->a[42899] = 1;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_797.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3985(t_small_parse_table_array *v)
{
	v->a[79700] = 1;
	v->a[79701] = anon_sym_DOLLAR_LBRACE;
	v->a[79702] = actions(1971);
	v->a[79703] = 1;
	v->a[79704] = anon_sym_DOLLAR_LPAREN;
	v->a[79705] = actions(1973);
	v->a[79706] = 1;
	v->a[79707] = anon_sym_BQUOTE;
	v->a[79708] = actions(1975);
	v->a[79709] = 1;
	v->a[79710] = sym_extglob_pattern;
	v->a[79711] = state(1547);
	v->a[79712] = 1;
	v->a[79713] = aux_sym_case_statement_repeat1;
	v->a[79714] = state(2080);
	v->a[79715] = 1;
	v->a[79716] = sym_case_item;
	v->a[79717] = state(2434);
	v->a[79718] = 1;
	v->a[79719] = sym__case_item_last;
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = state(2224);
	v->a[79721] = 2;
	v->a[79722] = sym_concatenation;
	v->a[79723] = sym__extglob_blob;
	v->a[79724] = actions(1955);
	v->a[79725] = 3;
	v->a[79726] = sym_raw_string;
	v->a[79727] = sym_number;
	v->a[79728] = sym_word;
	v->a[79729] = state(2157);
	v->a[79730] = 5;
	v->a[79731] = sym_arithmetic_expansion;
	v->a[79732] = sym_string;
	v->a[79733] = sym_simple_expansion;
	v->a[79734] = sym_expansion;
	v->a[79735] = sym_command_substitution;
	v->a[79736] = 15;
	v->a[79737] = actions(3);
	v->a[79738] = 1;
	v->a[79739] = sym_comment;
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = actions(1959);
	v->a[79741] = 1;
	v->a[79742] = anon_sym_LPAREN;
	v->a[79743] = actions(1963);
	v->a[79744] = 1;
	v->a[79745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79746] = actions(1965);
	v->a[79747] = 1;
	v->a[79748] = anon_sym_DOLLAR;
	v->a[79749] = actions(1967);
	v->a[79750] = 1;
	v->a[79751] = anon_sym_DQUOTE;
	v->a[79752] = actions(1969);
	v->a[79753] = 1;
	v->a[79754] = anon_sym_DOLLAR_LBRACE;
	v->a[79755] = actions(1971);
	v->a[79756] = 1;
	v->a[79757] = anon_sym_DOLLAR_LPAREN;
	v->a[79758] = actions(1973);
	v->a[79759] = 1;
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = anon_sym_BQUOTE;
	v->a[79761] = actions(1975);
	v->a[79762] = 1;
	v->a[79763] = sym_extglob_pattern;
	v->a[79764] = state(1547);
	v->a[79765] = 1;
	v->a[79766] = aux_sym_case_statement_repeat1;
	v->a[79767] = state(2080);
	v->a[79768] = 1;
	v->a[79769] = sym_case_item;
	v->a[79770] = state(2322);
	v->a[79771] = 1;
	v->a[79772] = sym__case_item_last;
	v->a[79773] = state(2224);
	v->a[79774] = 2;
	v->a[79775] = sym_concatenation;
	v->a[79776] = sym__extglob_blob;
	v->a[79777] = actions(1955);
	v->a[79778] = 3;
	v->a[79779] = sym_raw_string;
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = sym_number;
	v->a[79781] = sym_word;
	v->a[79782] = state(2157);
	v->a[79783] = 5;
	v->a[79784] = sym_arithmetic_expansion;
	v->a[79785] = sym_string;
	v->a[79786] = sym_simple_expansion;
	v->a[79787] = sym_expansion;
	v->a[79788] = sym_command_substitution;
	v->a[79789] = 3;
	v->a[79790] = actions(3);
	v->a[79791] = 1;
	v->a[79792] = sym_comment;
	v->a[79793] = actions(2722);
	v->a[79794] = 2;
	v->a[79795] = sym_file_descriptor;
	v->a[79796] = aux_sym_heredoc_redirect_token1;
	v->a[79797] = actions(2724);
	v->a[79798] = 19;
	v->a[79799] = anon_sym_esac;
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */

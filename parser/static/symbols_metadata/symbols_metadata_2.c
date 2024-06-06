/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_metadata_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_metadata.h"

void	symbols_metadata_10(t_symbols_metadata_array *v)
{
	v->a[aux_sym_declaration_command_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_unset_command_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_command_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_command_repeat2] = sym_metadata(false, false, false);
	v->a[aux_sym_variable_assignments_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_heredoc_body_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__literal_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_arithmetic_expansion_repeat1] \
	= sym_metadata(false, false, false);
	v->a[aux_sym_concatenation_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym_string_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__expansion_regex_repeat1] = sym_metadata(false, false, false);
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= sym_metadata(false, false, false);
}

/* EOF symbols_metadata_2.c */
